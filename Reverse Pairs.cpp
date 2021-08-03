//https://leetcode.com/problems/reverse-pairs/
class Solution {
public:
    void merger(vector < int >& arr, int l, int m, int r, int& c)
    {
	    int nl = m - l + 1;
	    int nr = r - m;
	    vector < int > larr;
	    vector < int > rarr;

	    for (int i = l; i <= m; i++)
	    {
		    larr.push_back(arr[i]);
	    }
	    for (int i = m + 1; i <= r; i++)
	    {
		    rarr.push_back(arr[i]);
	    }
        
        int i = 0;
	    int j = 0;
	    int count = 0;

	    for (i = 0; i < nl; i++)
	    {
		    while (j < nr && larr[i] > 2LL * rarr[j])
		    {
			    j++;
		    }
		    count += j;
	    }
	    c += count;
        
	    int lite = 0;
	    int rite = 0;
	    int aite = l;

	    while (lite < nl && rite < nr)
	    {
		    if (larr[lite] < rarr[rite])
		    {
			    arr[aite] = (int)larr[lite];
			    lite++;
			    aite++;
		    }
		    else
		    {
			    arr[aite] = (int)rarr[rite];
			    rite++;
			    aite++;
		    }
	    }

	    while (lite < nl)
	    {
		    arr[aite] = larr[lite];
		    aite++;
		    lite++;
	    }
	    while (rite < nr)
	    {
		    arr[aite] = rarr[rite];
		    aite++;
		    rite++;
	    }


    }

    void merge_sort(vector < int >& arr, int l, int r, int& c)
    {
	    if (l >= r)
	    {
		    return;
	    }

	    int m = l + (r - l) / 2;
	    merge_sort(arr, l, m, c);
	    merge_sort(arr, m + 1, r, c);
	    merger(arr, l, m, r, c);
    }

    int reversePairs(vector<int>& nums) {
        int c = 0;
        int l = 0;
        int r = (int)nums.size()-1;
        merge_sort(nums, l, r, c);
        return c;
    }
};
