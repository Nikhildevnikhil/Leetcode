class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow,*fast = head;
        while(fast != NULL and fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
