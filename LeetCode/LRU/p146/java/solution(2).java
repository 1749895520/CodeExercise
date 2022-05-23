public class LRUCache {
    LinkedHashMap<Integer,Integer> cache = new LinkedHashMap<>();
    int cap;
    public LRUCache(int capacity) {
        this.cap = capacity;
    }

    public int get(int key) {
        if(cache.containsKey(key)) {
            makeRecently(key);
            return cache.get(key);
        }
        return -1;
    }

    public void put(int key, int value) {
        if(cache.containsKey(key)) {
            cache.put(key,value);
            makeRecently(key);
        } else {
            cache.put(key,value);
            if(cache.size()>cap) {
                cache.remove(cache.keySet().iterator().next());
            }
        }
    }

    public void makeRecently(int key) {
        int val = cache.get(key);
        cache.remove(key);
        cache.put(key,val);
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */