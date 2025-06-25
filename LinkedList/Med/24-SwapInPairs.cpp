class Solution {
public:
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode* swapPairs(ListNode* head) {
      ListNode* dummy = new ListNode(0, head);
      if(dummy->next == nullptr || dummy->next->next == nullptr) return dummy->next;
      
      ListNode* dummy = new ListNode(0, head);
      ListNode* prev = dummy;

      while (prev->next != nullptr && prev->next->next != nullptr) {
          ListNode* first = prev->next;
          ListNode* second = first->next;

          // Swapping nodes
          first->next = second->next;
          second->next = first;
          prev->next = second;

          // Move prev to the next pair
          prev = first;
      }

      ListNode* newHead = dummy->next;
      delete dummy;
      return newHead;
    }
};