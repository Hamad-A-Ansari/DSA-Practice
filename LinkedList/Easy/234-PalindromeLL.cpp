
class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
     };
     
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next; 
            curr->next = prev;           
            prev = curr;                 
            curr = next;                 
        }

        return prev; 
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        //Find middle
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //Reverse second half
        ListNode* secondHalfStart = reverseList(slow->next);

        //Compare halves
        ListNode* firstHalfStart = head;
        ListNode* secondHalfIter = secondHalfStart;
        while (secondHalfIter) {
            if (firstHalfStart->val != secondHalfIter->val)
                return false;
            firstHalfStart = firstHalfStart->next;
            secondHalfIter = secondHalfIter->next;
        }

        

        return true;
    }
};