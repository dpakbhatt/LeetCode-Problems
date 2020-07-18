class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int, int> m;
    vector<int> v;
    int n = 0;

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.count(val))
          return false;

        m[val] = n++;
        v.push_back(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(!m.count(val))
          return false;

        int i = m[val];
        int last = v.back();
        v[i] = last;
        m[last] = i;
        v.pop_back();
        n--;

        m.erase(val);
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return v[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
