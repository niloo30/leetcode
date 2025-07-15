
class Solution {
public:
    TreeNode* makeBST(ListNode* start,ListNode* end)
    {
        if(start==end)
        return nullptr;

        ListNode* slow=start;
        ListNode* fast=start;

        while(fast!=end && fast->next!=end)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        TreeNode* head=new TreeNode(slow->val);
        head->left=makeBST(start,slow);
        head->right=makeBST(slow->next,end);

        return head;

    }
    TreeNode* sortedListToBST(ListNode* head) {
        

        if(!head)
        return nullptr;


        return makeBST(head,NULL);
    }
};