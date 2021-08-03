class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = (int)nums.size();
        int val = 0;
        int sum = 0;
        
        for(int i = 0; i<n; i++)
        {
            val += i;
            sum += nums[i];
        }
        val += n;
        return val-sum;
    }
};
