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
        if (!head || !head->next) return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* head1 = dummy;
        ListNode* head2 = dummy->next;


        while (head2 ) {
          if(head2->next && head2->val == head2->next->val){

            while (head2->next && head2->next->val == head2->val)
            {
              /* code */
              head2 = head2->next;
            }
            head1->next = head2->next;
          } else {
            head1 = head1->next;
          }
          head2 = head2->next;
          
        }

        return dummy->next;    
    }
};