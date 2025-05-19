//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        map<int,int>mp;
      for(auto it:arr){
          mp[it]++;
      }
      for(int i=0;i<arr.size();i++){
          int el=target-arr[i];
          if(mp.find(el)!=mp.end()){
              if(el==arr[i]){
                  if(mp[el]>1)return true;
              }else{
                  return true;
              }
          }
      }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends