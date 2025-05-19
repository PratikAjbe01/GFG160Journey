//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
      int n=arr.size();
      int cnt=0;
      for(int i=0;i<n-2;i++){
          int low=i+1;
          int high=n-1;
          while(low<high){
              int sum=arr[i]+arr[low]+arr[high];
              if(sum>target)high--;
              else if(sum<target)low++;
              else if(sum==target){
                  cnt++;
                  int temp=low+1;
                  while(temp<high&&arr[temp]==arr[temp-1]){
                      cnt++;
                      temp++;
                  }
                  high--;
              }
          }
          
       
      }
      return cnt;
        
    }
};


//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends