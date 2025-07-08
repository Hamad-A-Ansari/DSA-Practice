#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    // Reverse Logic
    ListNode* reverseList(ListNode* head, ListNode* head2) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != head2) {
            ListNode* next = curr->next; 
            curr->next = prev;           
            prev = curr;                 
            curr = next;                 
        }

        return prev; 
    }

    
    ListNode* reverseKGroup(ListNode* head, int k) {
      int size=1;
      ListNode* it = head;

      while(it->next != nullptr){
        it = it->next;
        size++;
      }

      int steps = size/k;

      ListNode* dummy = new ListNode(0, head);
      ListNode* prev = dummy;
      ListNode* curr = head;

      while(steps!=0){
        ListNode* groupStart = curr;
        ListNode* groupEnd = curr;

        for (int i = 1; i < k; i++) {
            groupEnd = groupEnd->next;
        }

        ListNode* nextGroupStart = groupEnd->next;

        ListNode* newGroupHead = reverseList(groupStart, nextGroupStart);

        prev->next = newGroupHead;
        groupStart->next = nextGroupStart;

        prev = groupStart;
        curr = nextGroupStart;

        steps--;
      }

      return dummy->next;
        
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        int groupSize = 1;

        while (curr) {
            ListNode* groupStart = curr;
            int count = 0;

          
            ListNode* temp = curr;
            for (int i = 0; i < groupSize && temp != nullptr; i++) {
                temp = temp->next;
                count++;
            }

            ListNode* groupEnd = temp;  

            if (count % 2 == 0) {
                ListNode* newGroupHead = reverseList(groupStart, groupEnd);
                prev->next = newGroupHead;
                groupStart->next = groupEnd;
                prev = groupStart;
            } else {
                for (int i = 0; i < count; i++) {
                    prev = curr;
                    curr = curr->next;
                }
            }

            curr = groupEnd;
            groupSize++;
        }

        return dummy->next;
    }

};


