#include <bits/stdc++.h>

using namespace std;
int main()
{    int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
   cin>>a[i];
   int i=0,j=0;
   vector<int>v;
    vector<int>ans;
   while(j<n)
   {
       if(a[j]<0)
        v.push_back(a[j]);
        if(j-i+1<k)
         j++;
         if(j-i+1==k)
         {
             ans.push_back(v[0]);
             if(a[i]==v[0])
               v.erase(v.begin());
               i++;j++;
         }
   }
  for(auto i:ans)
  cout<<i<<" "; 
   

    return 0;
}
