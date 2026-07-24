class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> word;

        if(s.size() != t.size()) return false;
        
        for (char i : s){
            word[i] += 1;
        }

        for (char i : t){
            word[i] -= 1;
        }

        for(auto& i : word){
            if(i.second > 0){
                return false;
            }
        }
        return true;
    }
};
