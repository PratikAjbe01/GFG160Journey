//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
      int n=prices.size();
      int prev=prices[0];
      int profit=0;
      for(int i=1;i<n;i++){
          if(prices[i]-prev>=0){
              profit+=prices[i]-prev;
              prev=prices[i];
          }else{
              prev=prices[i];
          }
      }
        return profit;
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
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends