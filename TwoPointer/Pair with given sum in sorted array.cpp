//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int low=0;
        int high=arr.size()-1;
        int cnt=0;
        while(low<high){
            int sum=arr[low]+arr[high];
            if(sum>target)high--;
            else if(sum<target)low++;
            else if(sum==target){
                cnt++;
                int temp=low+1;
                while(arr[temp-1]==arr[temp]&&temp<high){
                    cnt++;
                    temp++;
                }
                high--;
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
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends