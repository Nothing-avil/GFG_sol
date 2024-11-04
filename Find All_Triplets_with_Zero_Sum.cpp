// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // int n=arr.size();
        // vector<pair<int,int>> v;
        // for(int i=0;i<n;i++)
        // v.push_back({arr[i],i});
        
        // sort(v.begin(),v.end(),[&](pair<int,int>& a,pair<int,int>& b){
        //     if(a.first!=b.first)
        //     return a.first<b.first;
            
        //     return a.second<b.second;
        // });
        
        // vector<vector<int>> ans;
        // for(int i=0;i<n;i++)
        // {
        //     int j=i+1;
        //     int k=n-1;
        //     while(j<k)
        //     {
        //         int sum=v[i].first+v[j].first+v[k].first;
        //         if(sum==0)
        //         {
        //             vector<int> temp;
        //             temp.push_back(v[i].second);
        //             temp.push_back(v[j].second);
        //             temp.push_back(v[k].second);
                    
        //             sort(temp.begin(),temp.end());
        //             ans.push_back(temp);
                    
        //             j++;
        //             k--;
        //         }
        //         else if(sum>0)
        //         k--;
        //         else
        //         j++;
        //     }
        // }
        // return ans;
        
        vector<vector<int>> ans;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k] == 0){
                        ans.push_back({i,j,k});
                    }
                }
            }
        }
        return ans;
    }
};
