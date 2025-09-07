class Solution {
public:
    vector<int> NGER(vector<int> arr){
    stack<int> st ;
    vector<int> v ;
    int n = arr.size() ;
    
    for( int i = n - 1 ; i >= 0 ; i-- ){
        
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop() ;
        }
        
        if(st.size() == 0){
            v.push_back(-1) ;
        }else{
            v.push_back(st.top()) ;
        }
        
        st.push(arr[i]) ;
    }
    
    reverse(v.begin() , v.end()) ;
    return v ;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    
    vector<int> query = NGER(nums2) ;
    vector<int> ans ;
    // key : nums2 , value : NGE
    unordered_map<int, int> mpp ;
    for(int i = 0 ; i < nums2.size() ; i++ ){
      mpp[nums2[i]] = query[i] ;
    }

    for(int i = 0 ; i < nums1.size() ; i++ ){
      ans.push_back(mpp[nums1[i]]) ;
    }
    return ans ;
    }
};