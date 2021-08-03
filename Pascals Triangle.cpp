class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int>> retvec = {{1}, {1, 1}};
        
        int n = numRows;
        
        if(n == 1)
        {
            return {{1}};
        }
        
        if(n == 2)
        {
            return {{1}, {1,1}};
        }
        
        for(int i = 3; i<=n; i++)
        {
            vector < int > vec(i, 1);
            for(int j = 1; j<(i-1); j++)
            {
                vec[j] = retvec[i-2][j-1] + retvec[i-2][j];
            }
            
            retvec.push_back(vec);
            
        }
        
        return retvec;
    }
};
