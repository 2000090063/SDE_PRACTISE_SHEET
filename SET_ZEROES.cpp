/******************************************************************************
 
 -----------------SET MATRIX ZERO -----------------------------

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void setzero(vector<vector<int>>&v)
{    int t=1;
     for(int i=0;i<v.size();i++)
     {      if(v[i][0]==0)
                t=0;
            for(int j=1;j<v[i].size();j++)
            {
                if(v[i][j]==0)
                  {
                      v[0][j]=0;
                      v[i][0]=0;
                  }
            }
         
     }
     for(int i=v.size()-1;i>=0;i--)
     {
         for(int j=v[0].size()-1;j>=0;j--)
         {
             if(v[i][0]==0 || v[0][j]==0)
               v[i][j]=0;
             
         }
         if(t==0)
          v[i][0]=0;
     }
}

int main()
{
       int n,m;
       cin>>n>>m;
       vector<vector<int>>v(n,vector<int>(m));
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           cin>>v[i][j];
       }
       setzero(v);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
            cout<<v[i][j]<<" ";
            cout<<endl;
       }
       
    return 0;
}
