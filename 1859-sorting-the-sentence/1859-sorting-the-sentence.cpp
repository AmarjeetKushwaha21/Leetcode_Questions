class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> v(10);

        string word;

        while (ss >> word) {
            int pos = word.back() - '0';

            word.pop_back();

            v[pos] = word;
        }

        string ans = "";

        for (int i = 1; i < 10; i++) {
            if (v[i] != "") {
                ans += v[i] + " ";
            }
        }

        ans.pop_back();

        return ans;
    }
};