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

    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);  // Dummy node before head
        dummy->next = head;
        ListNode* curr = dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == x) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};