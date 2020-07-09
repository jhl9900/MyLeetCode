/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int tmp1 = nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                int tmp2 = nums[j];
                if(tmp1 + tmp2 == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
            
        }
        return res;
    }
};
// @lc code=end

