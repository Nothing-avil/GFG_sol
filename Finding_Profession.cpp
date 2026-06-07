class Solution {
  public:
    bool fn(int x,bool eng){
        if(x==1){
            return (eng == 1);
        }
        
        if(x%2 != 0){
            return fn((x+1)/2,eng);
        }
        else{
            return fn((x+1)/2,!eng);
        }
    }
    
    string profession(int level, int pos) {
        bool is_engineer = fn(pos,1);
        
        if(is_engineer){
            return "Engineer";
        }
        else return "Doctor";
    }
};
