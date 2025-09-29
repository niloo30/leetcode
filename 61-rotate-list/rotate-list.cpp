
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || k==0)
        return head;

        

        int len=0;

        ListNode* tail=head;
        while(tail and tail->next)
        {
            len++;
            tail=tail->next;
        }
        len++;
        tail->next=head;
        k=k%len;

        ListNode* temp=head;
        for(int i=0;i<len-k-1;i++)
        temp=temp->next;

        head=temp->next;
        temp->next=nullptr;
        cout<<len<<endl;
        return head;

        
    }
};