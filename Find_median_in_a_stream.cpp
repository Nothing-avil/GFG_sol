class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<double> pqmax;
        priority_queue<double, vector<double>, greater<>> pqmin;
        vector<double> ans;
        for(int i=0; i<arr.size(); i++){
            if(pqmin.empty()){
                pqmax.push(arr[i]);
            }
            else if(pqmin.top() < arr[i]){
                pqmin.push(arr[i]);
            }
            else{
                pqmax.push(arr[i]);
            }
            if(pqmax.size() > pqmin.size()+1){
                pqmin.push(pqmax.top());
                pqmax.pop();
            }
            else if(pqmax.size() < pqmin.size()){
                pqmax.push(pqmin.top());
                pqmin.pop();
            }
            if(pqmax.size() == pqmin.size()){
                double x = (pqmin.top() + pqmax.top())/2;
                ans.push_back(x);
            }
            else{
                ans.push_back(pqmax.top());
            }
        }
        return ans;
    }
};
