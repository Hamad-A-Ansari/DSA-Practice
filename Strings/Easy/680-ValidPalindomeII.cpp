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

    bool isPalRange(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    // bool validPalindrome(string s) {
    //     vector<string> result;
    //     for (int i = 0; i < s.size(); i++) {
    //       string temp = s.substr(0, i) + s.substr(i + 1);
    //       result.push_back(temp);
    //     }

    //     for(auto it: result){
    //       if(isPalindrome(it)) return true;
    //     }
    //     return false;
    // }
    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                // Try skipping one character from either side
                return isPalRange(s, left + 1, right) || isPalRange(s, left, right - 1);
            }
        }

        return true; // Already a palindrome
    }
};
