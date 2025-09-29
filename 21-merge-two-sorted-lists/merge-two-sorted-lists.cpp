
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* dummy=new ListNode(-1);
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* temp=dummy;
        while(t1 and t2)
        {
            if(t1->val<=t2->val)
            {
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else
            {
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }

        }
        if(!t1)
        temp->next=t2;
        else
        if(!t2)
        temp->next=t1;

        dummy=dummy->next;
        return dummy;
        
    }
};