#include <bits/stdc++.h>
#include <string>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> valS;
        unordered_map<char, int> valT;

        for (char c : s) {
            valS[c]++;
        }

        for (char c : t) {
            valT[c]++;
        }

        // Compare frequency of characters in valS with valT
        for (auto& entry : valS) {
            char ch = entry.first;
            int freq = entry.second;
            if (valT[ch] != freq) return false;
        }

        return true;
    }
};