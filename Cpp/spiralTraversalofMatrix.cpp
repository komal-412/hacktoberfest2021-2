#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        
        vector<int>ans(r*c);
        int j=0;
        int sr=0,er=r-1,sc=0,ec=c-1;
        
        while(sr<=er && sc<=ec){
            
            
            for(int i=sc;i<=ec;i++){
               ans[j++]=matrix[sr][i];
            }
            sr++;
            
            for(int i=sr;i<=er;i++){
                ans[j++]=matrix[i][ec];
            }
            ec--;
            
            if(er>=sr)
            
            for(int i=ec;i>=sc;i--){
                ans[j++]=matrix[er][i];
            }
            er--;
            
            if(sc<=ec)
            
            for(int i=er;i>=sr;i--){
                ans[j++]=matrix[i][sc];
            }
            sc++;
        }
        
        return ans;
        
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 
