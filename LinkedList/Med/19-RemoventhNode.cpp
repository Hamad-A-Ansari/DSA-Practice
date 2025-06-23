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

    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* finAns = new ListNode();
      finAns->next = head;
      ListNode* it = head;

      int m = 0;
      
      while(it !=nullptr){
        m++;
        it = it->next;
      }




      



      return finAns->next;
    }
};