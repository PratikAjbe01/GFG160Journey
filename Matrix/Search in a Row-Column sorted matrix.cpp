//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
      int n=mat.size();
      int m=mat[0].size();
      int row=0;
      int col=m-1;
      while(row<n&&col>=0){
          int it=mat[row][col];
          if(it==x)return true;
          else if(mat[row][col]>x){
            col--;
          }else{
          row++;
          }
      }
        return false;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends