class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> dictionary;
        vector<vector<string>> output;

        for(string n : strs){
            string key = n;
            sort(key.begin(), key.end());

            dictionary[key].push_back(n);
        }

        for (auto& e : dictionary){
            output.push_back(e.second);
        }

        return output;

    }
};