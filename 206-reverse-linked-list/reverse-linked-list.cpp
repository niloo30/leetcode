
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* t=head;
        ListNode* prev=nullptr;
        if(head==nullptr || head->next==nullptr)
        return head;
        while(t->next)
        {
            ListNode* front=t->next;
            t->next=prev;
            prev=t;
            t=front;
        }
        t->next=prev;
        return t;
    }
};