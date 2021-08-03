class Solution {
public:
    void sortColors(vector<int>& a) {
        
        int n = (int)a.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        
        while(mid <= high)
        {
            if(a[mid] == 0)
            {
                swap(a[mid], a[low]);
                mid++;
                low++;
            }
            else if(a[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(a[mid], a[high]);
                high--;
            }
        }
        
    }
};
