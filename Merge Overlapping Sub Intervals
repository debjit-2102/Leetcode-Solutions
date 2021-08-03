class Solution {
    
private:
    static bool sortcols(const vector < int >& v1, const vector < int >& v2)
    {
        return v1[0] < v2[0];
    }
    
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector <vector < int >> vec;
        
        int n = (int)intervals.size();
        sort(intervals.begin(), intervals.end(), sortcols);
        
        int curr_s;
        int curr_e;
        
        for(int i = 0; i<n; i++)
        {
            curr_s = intervals[i][0];
            curr_e = intervals[i][1];
            
            if(i == (n-1))
            {
                vec.push_back({curr_s, curr_e});
                break;
            } 
            
            while(i<(n-1) && curr_e >= intervals[i+1][0])
            {
                i++;
                curr_e = max(intervals[i][1], curr_e);
            }
            
            vec.push_back({curr_s, curr_e});
            
        }
        return vec;
        
    }
};
