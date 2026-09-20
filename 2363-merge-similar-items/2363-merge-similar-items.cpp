class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mp;
        for(auto i :items1){
            mp[i[0]]+=i[1];
        }
        for(auto j :items2){
            mp[j[0]]+=j[1];
        }
        vector<vector<int>> ans;
        for(auto k : mp){
            ans.push_back({k.first,k.second});
        }
        return ans;
    }
};