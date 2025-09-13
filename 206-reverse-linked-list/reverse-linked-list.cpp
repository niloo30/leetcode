
class Solution {
public:
    ListNode* ans=nullptr;
    ListNode* f(ListNode* t)
    {
        if(t->next==nullptr)
        {
            ans=t;
            return t;
        }

        ListNode* newhead=f(t->next);
        ListNode* front=t->next;
        front->next=t;
        // temp->next=t;
        t->next=nullptr;

        return ans;
    }
    ListNode* reverseList(ListNode* head) {
        
        if(head==nullptr)
        return head;
        ListNode* t=head;
        return f(t);
    }
};