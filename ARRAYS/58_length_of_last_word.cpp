#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Solution solution;
    int length = solution.lengthOfLastWord(s);

    cout << "Length of the last word: " << length << endl;

    return 0;
}