// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int , vector<int>, greater<int>> pq;
        int j=0;
        for(int i=0; i<arr.size(); i++){
            if(pq.size() == k){
                pq.push(arr[i]);
                arr[j++] = pq.top();
                pq.pop();
            }
            else{
                 pq.push(arr[i]);
            }
        }
        while(pq.size()){
            arr[j++] = pq.top();
            pq.pop();
        }
    }
};
