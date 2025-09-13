
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // if(n==1 && head->next==nullptr)
        // return head->next;
        ListNode* slow=head;
        ListNode* fast=head;

        for(int i=0;i<n;i++)
        fast=fast->next;


        while(fast && fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==nullptr)
        return head->next;
        slow->next=slow->next->next;
        return head;

        
    }
};