#include <bits/stdc++.h>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x): val(x), next(nullptr) {}
  ListNode(int x, ListNode *next): val(x), next(next) {}
};

ListNode* addTwoNumbers (ListNode* l1, ListNode* l2){
  ListNode *curr1 = l1;
  ListNode *curr2 = l2;

  string sl1 = "";
  string sl2 = "";

  while(curr1 != nullptr){
    sl1+= to_string(curr1->val);
    curr1 = curr1->next;
  }

  while(curr2 != nullptr){
    sl2+= to_string(curr2->val);
    curr2 = curr2->next;
  }

  reverse(sl1.begin(), sl1.end());
  reverse(sl2.begin(), sl2.end());

  long long num1 = stoll(sl1);
  long long num2 = stoll(sl2);
  long long sum = num1 + num2;

  string ans = to_string(sum);

  ListNode* output = new ListNode(ans[ans.size() - 1] - '0');
  ListNode* head = output;
  for(int i = ans.size() - 1; i >= 0; i--){
    head->next = new ListNode(ans[i] - '0');
    head = head->next;
  }

  ListNode* finH = output->next;
  return finH;
}

// Works for Smaller numbers - Brute Force

//Optimized
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy->next;
    }
};
