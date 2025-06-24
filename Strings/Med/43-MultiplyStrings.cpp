#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
      int numOne = 0;
      int numTwo = 0;

      for (int i = 0; i < num1.size(); i++)
      {
        /* code */
        numOne = numOne*10 + (num1[i] - '0');
      }

      for (int i = 0; i < num2.size(); i++)
      {
        /* code */
        numTwo = numTwo*10 + (num2[i] - '0');
      }
      

      int sum = numOne * numTwo;

      return to_string(sum);

    }
};