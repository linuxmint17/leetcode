//valid-parentheses
//
#include <stack>
#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    stack<char>  mainstack;
    bool isLeftParenthese(char c) {
        return c =='(' || c == '{' || c == '[';
    }
    char get_pair(char c) {
        switch(c) {
            case ')':
                return '(';
            break;
            case ']':
                return '[';
            break;
            case '}':
                return '{';
            break;
            default:
                return 's';
                break;
        }
    }

    bool isValid(string s) {
        int sz = s.size();
        int i;
        for (i = 0; i < sz; i++) {
            if (isLeftParenthese(s[i])) {
                mainstack.push(s[i]);
            } else {
                if (mainstack.empty()) {
                    return false;;
                } else {
                    if (mainstack.top() == get_pair(s[i])) {
                        mainstack.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        return mainstack.empty();
    }
};

int main() 
{
    Solution s;

    cout << s.isValid("()");
    cout << s.isValid("()[]{}");
    cout << s.isValid("()(]");
    cout << s.isValid("[{()}]");
    string s1 ="abc";
    cout << endl;
    cout << s1.size();
    cout << endl;
    cout << s1.length();
    return 0;
}
