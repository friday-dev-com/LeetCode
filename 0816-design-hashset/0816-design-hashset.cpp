class MyHashSet {
public:
    MyHashSet() {
        
    }

    vector<int>set;
    int n = 0;
    int r = 0;

    void add(int key) {
        bool present = contains ( key );

        if( !present ) {
            if( r == 0 ){
                set.emplace_back(key);
                n++;
            }
            else{
                for( int i = 0 ; i < n ; i++){
                    if ( set[i] == -1 ){
                        set[i] = key;
                        r--;
                        break;
                    }
                }
            }
        }
    }
    
    void remove(int key) {
        bool present = contains( key );

        if ( present ) {
            for ( int i = 0 ; i < n ; i++ ) {
                if( set[i] == key ) {
                    set[i] = -1;
                    r++;
                    break;
                }
            }
        }
    }
    
    bool contains(int key) {
        if ( n== 0 ) return false;

        for ( auto &it : set) {
            if ( it == key) {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */