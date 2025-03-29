class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    {
        sort(arr, arr+n, [](Job a, Job b){
            return a.profit > b.profit;
        });
        bool done[n] = {0};
        
        int day = 0, profit = 0;
        
        for(int i=0; i<n; i++){
            
            for(int j = min(n,arr[i].dead-1); j>=0;j--){
                
                if(done[j] == false){
                    
                    day+=1;
                    profit += arr[i].profit;
                    done[j] = true;
                    
                    done[j] = true;
                    break;
                }
            }
        }
        return {day,profit};
    } 
};

//Another approach

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();
        vector<pair<int, int>> jobs(n);

        int maxDays = 0;
        for (int i = 0; i < n; i++) {
            jobs[i] = {profit[i], deadline[i]};
            maxDays = max(maxDays, deadline[i]);
        }

        sort(jobs.rbegin(), jobs.rend());

        vector<int> parent(maxDays + 1);
        for (int i = 0; i <= maxDays; i++) parent[i] = i;
        function<int(int)> find = [&](int day) {
            if (parent[day] == day) return day;
            return parent[day] = find(parent[day]);
        };

        int jobCount = 0, maxProfit = 0;

        for (auto& job : jobs) {
            int p = job.first, d = job.second;

            int availableDay = find(d); // Find closest available day
            if (availableDay > 0) {
                parent[availableDay] = find(availableDay - 1); // Update parent (union)
                jobCount++;
                maxProfit += p;
            }
        }

        return {jobCount, maxProfit};
    }
};
