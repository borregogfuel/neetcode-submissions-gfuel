class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> storage;
        vector<vector<string>> result;

        for (string i : strs){
            string key = i;
            sort(key.begin(), key.end());
            storage[key].push_back(i);
        }

        for (auto& e : storage){
            result.push_back(e.second);
        }

        return result;

    }
};