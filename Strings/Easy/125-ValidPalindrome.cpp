#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
    string cleanString(string n){
        string result;
        for (char ch : n) {
            if (isalnum(ch)) {
                result += tolower(ch);
            }
        }
        return result;
    }

    bool isPalindrome(string s) {
        string cleaned = cleanString(s);
        string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());
        return cleaned==reversed;
    }
};
