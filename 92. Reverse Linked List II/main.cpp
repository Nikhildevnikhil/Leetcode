class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* prev = dummy;
        ListNode* current = prev->next;
        
        for(int i = 0 ; i < left - 1 ; i++){
            prev = current;
            current = current->next;
        }
        ListNode* temp = NULL;
        for(int i = 0 ;i < right - left + 1 ; i++){
            ListNode* tempNxt = current->next;
            current->next = temp;
            temp = current;
            current = tempNxt;
        }
        prev->next->next = current;
        prev->next = temp;
        return dummy->next;
    }
};
