// design the class in the most optimal way

class LRUCache {
  private:
  public:
    // Constructor for initializing the cache capacity with the given value.
    int cap;
    list<pair<int, int>> doubly;
    unordered_map<int, list<pair<int, int>>::iterator> mp;
    LRUCache(int cap) {
        this->cap = cap;
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        auto it = mp.find(key);
        if(it == mp.end()){
            return -1;
        }
        int val = it->second->second;
        doubly.erase(it->second);
        doubly.push_front({key, val});
        mp[key] = doubly.begin();
        return val;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        auto it = mp.find(key);
        if(it != mp.end()){
            doubly.erase(it->second);
            mp.erase(it);
        }
        doubly.push_front({key, value});
        mp[key] = doubly.begin();
        if(mp.size() > cap){
            auto last = doubly.back().first;
            doubly.pop_back();
            mp.erase(last);
        }
    }
};
