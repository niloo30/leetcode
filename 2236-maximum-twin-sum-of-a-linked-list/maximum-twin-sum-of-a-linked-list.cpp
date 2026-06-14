
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> arr;
        ListNode* temp= head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j)
        {
            ans=max(ans,arr[i]+arr[j]);
            i++;j--;
        }
        return ans;

        
    }
};