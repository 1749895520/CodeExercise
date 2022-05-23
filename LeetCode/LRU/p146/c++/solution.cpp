struct LinkNode {
    int key;
    int val;
    LinkNode *prev,*next;
    LinkNode() : key(0), val(0),next(nullptr),prev(nullptr){}
    LinkNode(int key_,int val_) : key(key_), val(val_),next(nullptr),prev(nullptr){}
};
class LRUCache {
private:
    unordered_map<int,LinkNode*> cache;
    int cap = 0;
    int size = 0;
    LinkNode *head, *tail;
public:
    LRUCache(int capacity) {
        cap = capacity;
        head = new LinkNode();
        tail = new LinkNode();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        LinkNode *Node = cache[key];
        if (Node == nullptr){
            return -1;
        }
        deleteNode(Node);
        insertNode(Node);
        return Node->val;
    }
    
    void put(int key, int value) {
        LinkNode *Node = cache[key];
        if(Node==nullptr){
            LinkNode *newNode = new LinkNode(key, value);
            insertNode(newNode);
            cache[key] = newNode;
            if(size>cap) {
                LinkNode *cacheNode = head->next;
                deleteNode(cacheNode);
                cache.erase(cacheNode->key);
            }
        } else {
            Node->val = value;
            deleteNode(Node);
            insertNode(Node);
        }

    }

    void insertNode(LinkNode *newNode) {
        newNode->next = tail;
        newNode->prev = tail->prev;
        tail->prev->next = newNode;
        tail->prev = newNode;

        size++;
    }

    void deleteNode(LinkNode *cacheNode) {
        cacheNode->next->prev = cacheNode->prev;
        cacheNode->prev->next = cacheNode->next;
        size--;
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */