/******************************************************************************
-----------------------NEXT-PERMUTATION------------

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{    int n,i,j;
    cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
    cin>>v[i];
    for(i=n-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
          break;
    }
    if(i<0)
      reverse(v.begin(),v.end());
     else
     {
         for(j=n-1;j>i;j--)
           {
               if(v[j]>v[i])
                  break;
           }
           swap(v[j],v[i]);
           reverse(v.begin()+i+1,v.end());
     }
     for(i=0;i<n;i++)
      cout<<v[i]<<" ";
   

    return 0;
}
