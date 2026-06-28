class Solution {
public:
    bool isAnagram(string s, string t) {
     unordered_map<char, int> letters;
    if (s.size() != t.size()) return false;
    for(char i : s) {
        letters[i]++;
    }
    
    for (char i : t) {
        letters[i]--;
    }
    for (const auto& i : letters){
        if (i.second > 0){
            return false;
        }
    }
    return true;

    }
};


