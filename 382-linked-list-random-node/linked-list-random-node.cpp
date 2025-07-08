
class Solution {
public:
    // O(n) time and O(n) space 
    vector<int> arr;
    Solution(ListNode* head) {

        while(head)
        {
            arr.push_back(head->val);
            head=head->next;
        }
        
    }
    
    int getRandom() {

        int idx=rand()%arr.size();

        return arr[idx];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */