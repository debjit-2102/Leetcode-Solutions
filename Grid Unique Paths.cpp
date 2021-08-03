//https://leetcode.com/problems/unique-paths/
class Solution {
public:
    int uniquePaths(int m, int n) {
        
        

	    vector < int > a(n, 1);
	    int i, j;

	    for (i = 1; i < m; i++)
	    {
		    for (j = 1; j < n; j++)
		    {
			    a[j] += a[j - 1];
		    }
	    }

	    return a[n-1];
        
    }
};
