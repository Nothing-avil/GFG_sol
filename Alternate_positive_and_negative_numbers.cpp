class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int> posi, nega;
        for(int i: arr){
            if(i<0){
                nega.push_back(i);
            }
            else{
                posi.push_back(i);
            }
        }
        int i=0, j=0, k=0;
        for(; i<posi.size() && j<nega.size(); i++, j++){
            arr[k++] = posi[i];
            arr[k++] = nega[j];
        }
        while(i<posi.size()){
            arr[k++] = posi[i++];
        }
        while(j<nega.size()){
            arr[k++] = nega[j++];
        }
    }
};
