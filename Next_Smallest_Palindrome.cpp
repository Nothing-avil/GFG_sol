class Solution {
  public:
  void addcarry(vector<int>&v,int n,int mid){
        int carry=1;
        if(n%2==0)mid--;
        while(carry && mid>=0){
            int val=v[mid]+carry;
            carry=0;
            if(val>9){
                carry=val/10;
                val%=10;
            }
            v[mid]=v[n-mid-1]=val;
            mid--;
        }
        if(carry){
            v.insert(v.begin(),carry);
            v.push_back(carry);
        }
    }
    int help(vector<int>&v,int mid){
        int count_9=0;
        while(mid>=0){
            if(v[mid]==9 && v[v.size()-1-mid]==9)count_9+=2;
            if(v[mid]!=v[v.size()-1-mid]) return 0;
            mid--;
        }
        if(count_9-1==v.size() && v.size()%2!=0) v.pop_back();
        else if(count_9-2==v.size() && v.size()%2==0) v.pop_back();
        return 1;
    }
    vector<int> nextPalindrome(vector<int>& num) {
        int n = num.size();
        vector<int>v;
        for(int i=0;i<n;i++) v.push_back(num[i]);
        int mid=n/2;
        int already_given=help(v,mid);
        if(already_given){
            addcarry(v,n,mid);
            return v;
        }
        int i=mid-1,changed_done=0;
        while(i>=0){
            if(v[i]<v[n-1-i] && changed_done==0){
                addcarry(v,n,mid);
                changed_done=1;
                i++;
            }
            else if(v[i]>v[n-1-i]){
                v[n-1-i]=v[i];
                changed_done=1;
            }
            else{
                v[n-1-i]=v[i];
            }
            i--;
        }
        
        return v;
    }
};
