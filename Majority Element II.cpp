//https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1, e2, c1 = 0, c2 = 0;
        vector < int > ret;
        if((int)nums.size() == 1)
        {
            return nums;
        }
        
        if((int)nums.size() == 2)
        {
            if(nums[0] == nums[1])
            {
                return {nums[0]};
            }
            else
                return nums;
        }
        
        if((int)nums.size() == 3)
        {
           if(nums[0] != nums[1] && nums[0] != nums[2])
           {
               if(nums[1] != nums[2])
                   return {};
           }
        }
        
        
        
        for(int i = 0; i<(int)nums.size(); i++)
        {
            if(nums[i] == e1)
            {
                c1++;
            }
            else if(nums[i] == e2)
            {
                c2++;
            }
            else if(c1 == 0)
            {
                c1++;
                e1 = nums[i];
            }
            else if(c2 == 0)
            {
                c2++;
                e2 = nums[i];
            }
            else
            {
                c1--;
                c2--;
            }
        }
        
        c1 = 0;
        c2 = 0;
        
        for(auto u : nums)
        {
            if(u == e1)
            {
                c1++;
                if(c1 > ((int)nums.size()/3))
                {
                    ret.push_back(e1);
                    break;
                }
            }
            
        }
        
        for(auto u : nums)
        {
            
            if(u == e2)
            {
                c2++;
                if(c2 > ((int)nums.size()/3))
                {
                    ret.push_back(e2);
                    break;
                }
            }
        }
        
        return ret;
        
    }
};
