class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> letter;

        if(s.size() != t.size()) return false;

        for(char l : s){
            letter[l]++;
        }

        for (char l : t){
            letter[l]--;
        }

        for (const auto& par : letter){
            if (par.second > 0) {
                return false;
            }
        }
        return true;


    }
};
