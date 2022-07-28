class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = new ListNode(0,head);
        ListNode* current = head;
        ListNode* dummy = prev;
        while(current != NULL){
            if(current->next != NULL and current->val == current->next->val){
                while(current->next and current->val == current->next->val){
                    current = current->next;
                }
                prev->next = current->next;
            }
            else{
                prev = prev->next;
            }
            current = current->next;
        }
        return dummy->next;
    }
};
