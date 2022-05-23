public class LRUCache {
    //  ����˫��������
    class LinkNode {
        int key;
        int val;
        LinkNode prev,next;
        public LinkNode() {}
        public LinkNode(int key, int val) {this.key = key;this.val = val;}
    }
    //  ������ϣ���key������Ԫ��
    private HashMap<Integer,LinkNode> cache = new HashMap<>();
    private int cap = 0;    //��������Ŀռ����ֵ
    private int size = 0;   //��������Ķ�̬�ռ�
    private LinkNode head,tail; //��������ͷ����β���
    //  ¼�뻺��ռ䲢����ͷβ���
    public LRUCache(int capacity) {
        this.cap = capacity;
        head = new LinkNode(0,0);
        tail = new LinkNode(0,0);
        tail.prev = head;
        head.next = tail;
    }
    //  ʹ�û���Ԫ��
    public int get(int key) {
        LinkNode node = cache.get(key); //���ڹ�ϣ������keyֵ
        if(node==null) {
            return -1;  //û���ҵ�����-1
        } else {
            deleteNode(node);   //�ҵ��˾ͽ��ý����ɾ����¼�룬ʹ��λ��������ʵ�λ��
            insertNode(node);
            return node.val;
        }
    }
    //  ���»���Ԫ��
    public void put(int key, int value) {
        LinkNode node = cache.get(key); //���ڹ�ϣ������keyֵ
        if(node==null) {
            LinkNode newNode = new LinkNode(key,value); //û���ҵ����´���һ����㲢�����������λ��
            insertNode(newNode);
            cache.put(key,newNode);     //���¹�ϣ������
            if(size>cap) {      //���Ԫ�س�������ռ���ɾ����ٷ��ʵĽ��
                LinkNode cacheNode = head.next;
                deleteNode(cacheNode);
                cache.remove(cacheNode.key);    //���¹�ϣ��
            }
        } else {
            node.val = value;   //�ڹ�ϣ���ҵ�keyֵ������������Ԫ�ص�valֵ
            deleteNode(node);   //ʹ��λ���������λ��
            insertNode(node);
        }
    }
    /*  ����ִ�з���    */
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