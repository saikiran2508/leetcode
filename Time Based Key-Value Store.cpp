class TimeMap {
public:
    map<string, map<int, string>> mp;
    TimeMap() {
        
    }
    
    void set(string k, string v, int ts) {
        mp[k][ts] = v;
    }
    
    string get(string k, int ts) {
        auto it = mp[k].upper_bound(ts);
        return it == mp[k].begin() ? "" : prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
