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
        ListNode(int x) : val(x), next(nullptr) {}
    };

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *it1 = headA;
        ListNode *it2 = headB;

        while (it1 != it2) {
            it1 = (it1 == nullptr) ? headB : it1->next;
            it2 = (it2 == nullptr) ? headA : it2->next;
        }

        return it1;
    }

};