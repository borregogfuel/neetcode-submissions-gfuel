class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> answermap;
        vector<vector<string>> results;
        
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());

            answermap[key].push_back(s);
        }
        for (auto& pair : answermap){
            results.push_back(pair.second);
        }
        return results;
    }
};