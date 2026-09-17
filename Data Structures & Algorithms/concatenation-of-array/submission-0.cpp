class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =nums.size();
        int i;
        vector<int> ans(n*2);
        for(i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
        
    }
};