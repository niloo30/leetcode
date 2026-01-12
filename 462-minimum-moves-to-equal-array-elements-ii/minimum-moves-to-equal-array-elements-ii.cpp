class Solution {
public:
    int minMoves2(vector<int>& arr) {

    // ios::sync_with_stdio(0);
    // cin.tie(0);
 
    // int n;
    // cin>>n;
 
    // vector<int> arr(n);
    // for(int i=0;i<n;i++) {
    //     cin>>arr[i];
    // }
 
    // sort(arr.begin(), arr.end());
    // int med=arr[n/2];
    // int ans=0;
    // for(int i=0;i<n;i++) {
    //     ans+=abs(arr[i]-med);
    // }
    // cout<<ans<<endl;

    int n=arr.size();
    
 
    sort(arr.begin(), arr.end());
    int med=arr[n/2];
    int ans=0;
    for(int i=0;i<n;i++) {
        ans+=abs(arr[i]-med);
    }
    cout<<ans<<endl;

    return ans;


        
    }
};