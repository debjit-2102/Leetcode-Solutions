//https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int e;
        int c=0;
        int n = (int)nums.size();
        e = 0;
        c++;
        for(int i = 1; i<n; i++)
        {
            if(c == 0)
            {
                e = i;
                c++;
            }
            else if(e < n && nums[i] == nums[e])
            {
                c++;
            }
            else if(e < n && nums[i] != nums[e])
            {
                c--;
                if(c <= 0)
                {
                    c = 0;
                    e = n+1;
                }
            }
        }
        
        return nums[e];
    }
};
