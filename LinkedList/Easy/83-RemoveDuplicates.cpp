#include <bits/stdc++.h>

/**
 * Definition for singly-linked list.
 *
 */
class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* finAns = head;
      
        while (finAns != nullptr && finAns->next != nullptr) {
            if (finAns->val == finAns->next->val) {
                ListNode* it = finAns->next;

                while (it != nullptr && it->val == finAns->val) {
                    it = it->next;
                }
                finAns->next = it;
            } else {
                finAns = finAns->next;
            }
        }

        return head;
    }
};