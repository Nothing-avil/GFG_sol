class Solution {
	public:
	int largestArea(int n, int m, vector<vector<int>> &arr) {
		vector<int> rows;
		vector<int> cols;
		rows.push_back(0);
		cols.push_back(0);
		for (int i = 0; i<arr.size(); i++) {
			rows.push_back(arr[i][0]);
			cols.push_back(arr[i][1]);
		}
		rows.push_back(n + 1);
		cols.push_back(m + 1);
		sort(rows.begin(), rows.end());
		sort(cols.begin(), cols.end());
		int mn = 0;
		int mm = 0;
		for (int i = 0; i<rows.size() - 1; i++) {
			mn = max(mn, (rows[i + 1]-rows[i]-1));
		}
		for (int i = 0; i<cols.size() - 1; i++) {
			mm = max(mm, (cols[i + 1]-cols[i]-1));
		}
		return mm*mn;
	}
};
