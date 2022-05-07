class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        
        int ele= INT_MIN; //nums[k]
        
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] < ele) return true;
            while(!st.empty() && st.top() < nums[i]) {
                ele = st.top();
                st.pop();
            } 
            st.push(nums[i]);
        }
        return false;
        
    }
};