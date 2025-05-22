#include <bits/stdc++.h>
using  namespace std;
class Solution {
  public:
   
    int findEquilibrium(vector<int> &arr) {
      int n=arr.size();
      int sum=accumulate(arr.begin(),arr.end(),0);
      int preSum=0;
      for(int i=0;i<n;i++){
           sum-=arr[i];
          if(preSum==sum)return i;
          preSum+=arr[i];
         
      }
        return -1;
    }
};