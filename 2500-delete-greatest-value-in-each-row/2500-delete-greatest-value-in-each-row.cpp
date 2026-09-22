class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
         int ans = 0;
        for (auto &row : grid) {
            sort(row.begin(), row.end());
        }
        int n = grid[0].size();

        for (int col = n - 1; col >= 0; col--) {
            int maxi = 0;
            for (int row = 0; row < grid.size(); row++) {
                maxi = max(maxi, grid[row][col]);
            }
            ans += maxi;
        }
        return ans;
    }
};