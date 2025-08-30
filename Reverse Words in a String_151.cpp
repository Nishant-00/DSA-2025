// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:

// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.


class Solution {
public:
    string reverseWords(string s) {

        string word = "";
        vector<string> res;
        string result;

        for (char x : s) {
            if (x != ' ') { // check to push char to word string while space not
                            // found
                word += x;
            } else {
                if (!word.empty()) { // is space found and word not empty add it
                                     // to result
                    res.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            res.push_back(word);
        }

        reverse(res.begin(), res.end());

        for (int i = 0; i < res.size(); i++) {
            result += res[i];

            if (i != res.size() - 1) { // If it's NOT the last word
                result += " ";         // Add a space
            }
        }

        return result;
    }
};