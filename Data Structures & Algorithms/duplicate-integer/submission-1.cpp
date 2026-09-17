class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) { // n+1
            for (int j = i + 1; j < nums.size(); j++) {//n(n+1)
                if (nums[i] == nums[j]) { //n(n)
                    return true;
                }
            }
        }
        return false;
    }
};