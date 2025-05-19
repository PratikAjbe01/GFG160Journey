//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
       sort(arr.begin(),arr.end());
       int n=arr.size()-1;
       int cnt=0;
       int i=0;
       while(i,n){
           int sum=arr[i]+arr[n];
           if(sum<target){
               cnt++;
               int temp=i+1;
               while(temp<n&&arr[temp]+arr[n]<target){
                   cnt++;
                   temp++;
               }
               n--;
           }else{
               n--;
           }
       }
       return cnt;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends