class Solution{   
public:
     bool isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0)  return 0;
        }
        return 1;
    }
    int solve(int Num1,int Num2)
    {   
        unordered_set<int> seen;
        queue<int> q;
        q.push(Num1);
        seen.insert(Num1);
        int levels=0;
        while(q.size()){
            int sz=q.size();
            while(sz--){
                int num=q.front();
                q.pop();
                if(num==Num2)   return levels;
                for(int i=0;i<4;i++){
                    int factor=pow(10,i);
                    int temp=num;
                    temp-=(factor*((temp/factor)%10));
                    
                    for(int val=0;val<=9;val++){
                        temp+=(factor*val);
                        if(temp>1000 && !seen.count(temp) && isPrime(temp)){
                            q.push(temp);
                            seen.insert(temp);
                        }
                        temp-=(factor*val);
                    }
                }
            }
            levels++;
        }
        return -1;      
    }
};
