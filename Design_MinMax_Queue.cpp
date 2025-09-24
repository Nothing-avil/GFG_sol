class SpecialQueue {
        vector<int> vt;
  public:

    void enqueue(int x) {
        vt.push_back(x);
    }

    void dequeue() {
        vt.erase(vt.begin());
    }

    int getFront() {
        return vt.front();
    }

    int getMin() {
        return *min_element(vt.begin(), vt.end());
    }

    int getMax() {
        return *max_element(vt.begin(), vt.end());
    }
};
