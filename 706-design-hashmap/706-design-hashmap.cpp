class MyHashMap {
public:
    vector<int>v;
    int n;
    MyHashMap() {
        n=10e6+1;
        v.resize(n);
        fill(v.begin(),v.end(),-1);
    }
    
    void put(int key, int value) {
        
        v[key] = value;
    }
    
    int get(int key) {
        
        return v[key];
        
    }
    
    void remove(int key) {
        v[key]=-1;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */