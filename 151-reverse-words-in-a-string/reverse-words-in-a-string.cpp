class Solution {
public:
    string reverseWords(string s) {

        // It will give string in the reverse order. But we need to correct the
        // format why iteration over the each string and again reverse it.
        reverse(s.begin(), s.end());

        string res = "";
        int i = 0;
        while (i < s.size()) {
            string word = "";

            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if (!word.empty()) {
                reverse(word.begin(), word.end());
                res = res + word + " ";
            }
            i++;
        }

        res.pop_back();

        return res;
    }
};