#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
     unordered_map<int,int>mp;
     int n=arr.size();
     int pS=0;
     int maxi=0;
     for(int i=0;i<n;i++){
         pS+=arr[i];
         if(pS==k){
             maxi=max(maxi,i+1);
         }
         if(mp.find(pS-k)!=mp.end()){
             maxi=max(maxi,i-mp[pS-k]);
         }
        if(mp.find(pS)==mp.end()){
            mp[pS]=i;
        }
     }
        return maxi;
    }
};