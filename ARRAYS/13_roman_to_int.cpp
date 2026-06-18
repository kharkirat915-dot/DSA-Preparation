#include <iostream>
#include <string>  
#include <vector>
using namespace std;

class Solution {
public:
    int value(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = value(s[i]);

            if (i < s.length() - 1 && current < value(s[i + 1])) {
                result -= current;
            } else {
                result += current;
            }
        }

        return result;
    }
};

int main()
{
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;

    Solution solution;
    int result = solution.romanToInt(s);

    cout << "Integer value: " << result << endl;

    return 0;
}