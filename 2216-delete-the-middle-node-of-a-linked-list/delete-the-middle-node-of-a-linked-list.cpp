
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* prev=NULL;
        ListNode* slow=head;
        ListNode* fast=head;

        if(head->next==NULL)
        return NULL;
        while(fast && fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;

        
    }
};