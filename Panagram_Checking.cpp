//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        if(s.size()<=26){
            return false;
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int arr[27]={0};
        for(char q: s){
            arr[q -'a']=1;
        }
        int c=0;
        for(int i=0; i<26; i++){
            if(arr[i]!=1){
                return false;
            }
        }
        return true;
    }

};
