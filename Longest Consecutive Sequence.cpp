//https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = (int)nums.size();
        set<int> umap;
        int count = 1;
        int max = 1;
        
        for(auto u :nums)
        {
            umap.insert(u);
        }
        if(n == 0)
        {
            return 0;
        }
        for(int i = 0; i<n; i++)
        {
            count = 1;
            if(umap.count(nums[i]-1) != 0)
            {
                continue;
            }
            else
            {
                int nu = nums[i];
                nu++;
                while(umap.count(nu) != 0)
                {
                    nu++;
                    count++;
                    if(count>max)
                    {
                        max = count;
                    }
                }
            }
        }
        return max;
    }
};
