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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* finAns = new ListNode();  // dummy head
        ListNode* head = finAns;

        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) {
                head->next = new ListNode(list1->val);
                list1 = list1->next;
            } else if(list2->val < list1->val) {
                head->next = new ListNode(list2->val);
                list2 = list2->next;
            } else {
                head->next = new ListNode(list1->val);
                head = head->next;
                head->next = new ListNode(list2->val);
                list1 = list1->next;
                list2 = list2->next;
            }
            head = head->next;
        }

        // Attach remaining nodes
        while(list1 != nullptr) {
            head->next = new ListNode(list1->val);
            list1 = list1->next;
            head = head->next;
        }

        while(list2 != nullptr) {
            head->next = new ListNode(list2->val);
            list2 = list2->next;
            head = head->next;
        }

        return finAns->next;
    }
};