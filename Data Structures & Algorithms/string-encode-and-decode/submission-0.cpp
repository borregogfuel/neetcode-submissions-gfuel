class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded_string = "";
        for (string s : strs){
            string size = to_string(s.size());
            encoded_string += size + "#" + s;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {

        vector<string> words;
        for (int i = 0; i < s.size(); i++){

            int j = i;
            while (s[j] != '#') j++;            
            int length = stoi(s.substr(i, j - i));

            string word = s.substr(j + 1, length);
            words.push_back(word);
            i = j + length;

        }
        return words;
    }
};
