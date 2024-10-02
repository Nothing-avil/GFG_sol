class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        deque<int> dq;
        for(int i:arr){
            dq.push_back(i);
        }
        int k=1, n= arr.size();
        while(n>k){
            int t = dq.back();
            dq.pop_back();
            dq.push_front(t);
            dq.erase(dq.begin() + n-k);
            k++;
            n--;
        }
        return dq[0];
    }
};
