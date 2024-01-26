class Solution
{
    public:
    
    static bool cmp(Item &a, Item &b){
        float aVal= 1.0*a.value/a.weight;
        float bVal= 1.0*b.value/b.weight;
        return aVal>bVal;
    }
    double fractionalKnapsack(int W, Item arr[], int n) {
        sort(arr, arr+n, cmp);
        double res=0;
        for(int i=0; i<n; i++){
            int take= min(W, arr[i].weight);
            double weigh= (1.0*arr[i].value)/arr[i].weight;
            res= res+ take*weigh;
            W=W-take;
        }
        return res;
        
    }
        
};
