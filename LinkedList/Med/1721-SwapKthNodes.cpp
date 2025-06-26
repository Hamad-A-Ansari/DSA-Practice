#include <bits/stdc++.h>
using namespace std;
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

    ListNode* swapNodes(ListNode* head, int k) {
        if(!head) return head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast n+1 steps ahead
        for (int i = 0; i <= k; i++) {
            fast = fast->next;
        }

        // Move both until fast reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* first = dummy;
        int i = k;
        while (i!=0)
        {
          /* code */
          first = first->next;
          i--;
        }

        int temp = first->val;
        first->val = slow->next->val;
        slow->next->val = temp;

        
        

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }


};