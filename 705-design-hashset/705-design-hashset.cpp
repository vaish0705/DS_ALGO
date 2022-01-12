class MyHashSet {
public:
    //we will make a vactor of size 10^6+1
    //when new elmnt is added we will mark that index as 1
    //int contain func we need to chk whether the elmnt is prsnt or not
    //in remove func we just need to chngevalue from 1 to 0
    
    
    vector<int>v;
    int n;
    MyHashSet() {
        int n =1e6+1;
        v.resize(n);
        
    }
    
    void add(int key) {
        v[key]=1;
        
    }
    
    void remove(int key) {
        v[key]=0;
        
    }
    
    bool contains(int key) {
        return v[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */