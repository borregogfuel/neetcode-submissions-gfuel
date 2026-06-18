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

        vector<string> word;

        int i = 0;

        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            word.push_back(s.substr(i, length));
            i = j;
        }
        return word;
    }
};
