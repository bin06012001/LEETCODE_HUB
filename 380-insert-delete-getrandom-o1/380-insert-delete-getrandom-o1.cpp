class RandomizedSet {
public:
    vector <int> elements;
    unordered_map <int, int> index;
    
    RandomizedSet() {
        index.clear();
        elements.clear();
    }
    
    bool insert(int val) {
        if(index.count(val)){
            return false;
        }
        
        index[val] = elements.size();
        
        elements.push_back(val);
        
        return true;
    }
    
    bool remove(int val) {
        if(!index.count(val)){
            return false;
        }
        
        int last = elements.back();
        
        elements.pop_back();
        elements[index[val]] = last;
        
        index[last] = index[val];
        index.erase(val);
        
        return true;
    }
    
    int getRandom() {
        int sz = elements.size();
        return elements[rand()%sz];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */