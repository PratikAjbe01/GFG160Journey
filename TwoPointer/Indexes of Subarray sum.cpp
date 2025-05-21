#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
    vector<int>ans;
    int low=0;
    
    int high=arr.size()-1;
    while(low<=high){
    int i=low;
    int sum=0;
    while(i<=high&&sum<=target){
          sum+=arr[i];
        if(sum==target){
            ans.push_back(low+1);
            ans.push_back(i+1);
            return ans;
        }
        i++;
    }
    low++;
    }
    if(ans.empty()){
        ans.push_back(-1);
    }
    return ans;
    }
};