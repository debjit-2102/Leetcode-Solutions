//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map <int, int> st;
        int diff;
        vector <int> ret;
        
        for(int i = 0; i<(int)nums.size(); i++)
        {
            diff = target - nums[i];
            
            if(st.find(diff) == st.end())
            {
                st[nums[i]] = i;
            }
            else
            {
                ret.push_back(st[diff]);
                ret.push_back(i);
                return ret;
            }
        }
        return ret;
    }
};
