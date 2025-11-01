
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> st;
        for(auto ele:nums)
        st.insert(ele);

        ListNode* dummy=new ListNode(-1);
        

        ListNode* temp=head;
        head=dummy;

        while(temp!=nullptr)
        {
            if(st.find(temp->val)==st.end())
            {
                head->next=temp;
                head=head->next;
                temp=temp->next;
                head->next=nullptr;
            }
            else 
            temp=temp->next;
        }

        return dummy->next;
        
    }
};