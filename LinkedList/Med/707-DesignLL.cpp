class MyLinkedList {
private:
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode* head;
    int size;
    
    
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;

        ListNode* it = head;
        while (index--) {
            it = it->next;
        }
        return it->val;
    }
    
    void addAtHead(int val) {
        ListNode* newVal = new ListNode(val);
        newVal->next = head;
        head = newVal;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* newVal = new ListNode(val);
        if (!head) {
          head = newVal; 
        } else {
            ListNode* it = head;
            while (it->next != nullptr) {
                it = it->next;
            }
            it->next = newVal;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size || index < 0) return;

        ListNode dummy(0, head);  
        ListNode* prev = &dummy;

        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }

        ListNode* newNode = new ListNode(val);
        newNode->next = prev->next;
        prev->next = newNode;

        head = dummy.next;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        prev->next = curr->next;
        delete curr;

        head = dummy.next;
        size--;
    }
};