class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        if(type == 1){
            for(int i = 0; i < k; i++){
                int n = dq.back();
                dq.pop_back();
                dq.push_front(n);
            }
        }else if(type == 2){
            for(int i = 0; i < k; i++){
                int n = dq.front();
                dq.pop_front();
                dq.push_back(n);
            }
        }
    }
};
