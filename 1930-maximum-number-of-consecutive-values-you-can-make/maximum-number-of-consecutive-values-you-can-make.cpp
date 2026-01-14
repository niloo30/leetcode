class Solution {
public:
    int getMaximumConsecutive(vector<int>& arr) {

    sort(arr.begin(), arr.end());
    int missing_coin_sum=1;
 
    for(int i=0;i<arr.size();i++) {
        if(arr[i]>missing_coin_sum) {
            break;
        }
        missing_coin_sum+=arr[i];
    }
    // cout<<missing_coin_sum+1<<endl;
    return missing_coin_sum;
        
    }
};