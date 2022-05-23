public class LRUCache {
    //  创建双向链表类
    class LinkNode {
        int key;
        int val;
        LinkNode prev,next;
        public LinkNode() {}
        public LinkNode(int key, int val) {this.key = key;this.val = val;}
    }
    //  创建哈希表存key和链表元素
    private HashMap<Integer,LinkNode> cache = new HashMap<>();
    private int cap = 0;    //创建缓存的空间最大值
    private int size = 0;   //创建缓存的动态空间
    private LinkNode head,tail; //创建虚拟头结点和尾结点
    //  录入缓存空间并连接头尾结点
    public LRUCache(int capacity) {
        this.cap = capacity;
        head = new LinkNode(0,0);
        tail = new LinkNode(0,0);
        tail.prev = head;
        head.next = tail;
    }
    //  使用缓存元素
    public int get(int key) {
        LinkNode node = cache.get(key); //先在哈希表中找key值
        if(node==null) {
            return -1;  //没有找到返回-1
        } else {
            deleteNode(node);   //找到了就将该结点先删除再录入，使其位于最近访问的位置
            insertNode(node);
            return node.val;
        }
    }
    //  更新缓存元素
    public void put(int key, int value) {
        LinkNode node = cache.get(key); //现在哈希表中找key值
        if(node==null) {
            LinkNode newNode = new LinkNode(key,value); //没有找到则新创建一个结点并存入最近访问位置
            insertNode(newNode);
            cache.put(key,newNode);     //更新哈希表内容
            if(size>cap) {      //如果元素超出缓存空间则删除最迟访问的结点
                LinkNode cacheNode = head.next;
                deleteNode(cacheNode);
                cache.remove(cacheNode.key);    //更新哈希表
            }
        } else {
            node.val = value;   //在哈希表找到key值则更新这个缓存元素的val值
            deleteNode(node);   //使其位于最近访问位置
            insertNode(node);
        }
    }
    /*  链表执行方法    */
    public void insertNode(LinkNode newNode) {
        newNode.next = tail;
        newNode.prev = tail.prev;
        tail.prev.next = newNode;
        tail.prev = newNode;
        size++;
    }

    public void deleteNode(LinkNode cacheNode) {
        cacheNode.prev.next = cacheNode.next;
        cacheNode.next.prev = cacheNode.prev;
        size--;
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */