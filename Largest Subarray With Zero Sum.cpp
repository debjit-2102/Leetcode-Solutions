int lengthOfLargestSubarrayWithZeroSum(vector <int> arr)
{
  map <int, int> mp;
  mp[0] = -1;
  int sum = 0; 
  int max = 0;
  
  for(int i = 0; i<(int)arr.size(); i++)
  {
    sum += arr[i];
    if(mp.find(sum) != mp.end())
    {
      int siz = i - mp[sum];
      if(siz>max)
        max = siz;
    }
    else
    {
      mp[sum] = i;
    }
  }
  
  return max;
 }
