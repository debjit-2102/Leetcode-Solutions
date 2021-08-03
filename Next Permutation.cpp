//https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i, j, min;

	    int n = (int)nums.size();
	    for (i = n - 1; i > 0 && nums[i] <= nums[i - 1]; i--)
		    ;
        
        if(i == 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            i--;
	        
	        for (j = n-1; j > i && nums[j] <= nums[i]; j--)
                ;
            swap(nums[i], nums[j]);
	        reverse(nums.begin() + i + 1, nums.end());
        }
        
    }
};
