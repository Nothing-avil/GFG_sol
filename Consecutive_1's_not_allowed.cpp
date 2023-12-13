class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    
	    int m = 1e9 +7;
        ll a =2;
        ll b =3;
        for(int i=2;i<=n;i++){
            ll temp = (a+b)%m;
            a = b;
            b = temp;
        }
        return a;
	}
};
