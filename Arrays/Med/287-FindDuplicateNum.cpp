#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_map<int, bool> seen;
      for(int i = 0; i < nums.size(); i++){
        if(seen[nums[i]]) return nums[i];

        seen[nums[i]] = true;
      }
    }
};