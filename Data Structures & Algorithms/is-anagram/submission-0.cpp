class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> letters;

        if (s.size() != t.size()) return false;

        for (char letter : s) {
            letters[letter]++;
        }

        for (char letter : t) {
            letters[letter]--;
            if(letters[letter] < 0) {
                return false;
            }
        
        }
        return true;

        

    }
};