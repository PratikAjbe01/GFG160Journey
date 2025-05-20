#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
    int n=arr.size();
    if(n<3)return 0;
    sort(arr.begin(),arr.end());
    int cnt=0;
    for(int i=2;i<n;i++){
        int low=0;
        int high=i-1;
        while(low<high){
            if(arr[low]+arr[high]>arr[i]){
                cnt+=high-low;
                high--;
            }else{
                low++;
            }
        }
       
    }
    return cnt;
        
    }
};
