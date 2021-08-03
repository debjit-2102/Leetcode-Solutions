//https://leetcode.com/problems/4sum/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        	
	    vector < vector < int > > vec;
	    int n = (int)nums.size();
	    sort(nums.begin(), nums.end());


	    for (int i = 0; i < n; i++)
	    {
		    if (i > 0 && nums[i] == nums[i - 1])
		    {
			    continue;
		    }

		    for (int j = i + 1; j < n; j++)
		    {
			    if (j > i + 1 && nums[j] == nums[j - 1])
			    {
				    continue;
			    }

			    int diff = target - nums[i] - nums[j];
			    int st = j + 1;
			    int en = n - 1;
			    while (st < n && en < n && st < en)
			    {
				    if (st > j + 1 && nums[st] == nums[st - 1])
				    {
					    st++;
					    continue;
				    }
				    if (nums[st] + nums[en] > diff)
				    {
					    en--;
				    }
				    else if (nums[st] + nums[en] < diff)
				    {
					    st++;
				    }
				    else if (nums[st] + nums[en] == diff)
				    {
					    vec.push_back({nums[i], nums[j], nums[st], nums[en]});
					    st++;
					    //st = en + 1;
				    }
			    }
		    }

	    }
        
        return vec;
    }
};
