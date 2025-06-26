class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
     };
     
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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* start = prev->next; 
        ListNode* end = start;
        for (int i = left; i < right; i++) {
            end = end->next;
        }

        ListNode* after = end->next; 

        
        ListNode* newHead = reverseList(start, after);

        
        prev->next = newHead;
        start->next = after;

        return dummy->next;
    }
};