class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            int num=arr[i];
            m[num]++;
        }
        bool flag=true;
        for( auto i : m){
            if(s.find(i.second)==s.end()) s.insert(i.second);
            else return false; 
        }
    return true;   
    }
};