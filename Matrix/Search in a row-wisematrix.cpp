

#include <bits/stdc++.h>
using namespace std;






class Solution {
  public:
   
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
      int n=mat.size();
      int m=mat[0].size();
      for(int i=0;i<n;i++)
      {
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mat[i][mid]==x)return true;
            else if(mat[i][mid]>x)high=mid-1;
            else low=mid+1;
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

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

