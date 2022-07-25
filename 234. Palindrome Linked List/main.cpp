class Solution {
public:
        ListNode* reverseList(ListNode *head){
        ListNode* dummyNode = NULL;
        while(head != NULL){
            ListNode *next = head -> next;
            head -> next = dummyNode;
            dummyNode = head;
            head = next;
        }
        return dummyNode;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL) return true;
       // Finding middle element
       ListNode *slow = head;
       ListNode *fast = head;
       while(fast -> next != NULL && fast -> next -> next != NULL){
           slow = slow -> next;
           fast = fast -> next -> next;
       }
       
       slow -> next = reverseList(slow -> next);
       slow = slow -> next;
       
       while(slow != NULL){
           if(head -> val != slow -> val) return false;
           head = head -> next;
           slow = slow -> next;
       }
       return true;
    }
    
};
