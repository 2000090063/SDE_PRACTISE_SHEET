#include <bits/stdc++.h>

using namespace std;
int main()
{    int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
   cin>>a[i];
  int i=0,j=0,s=0,mx=INT_MIN;
  while(j<n)
  {   s+=a[j];
      if(j-i+1<k)
        j++;
      if(j-i+1==k)
      {
          mx=max(mx,s);
          s-=a[i];
          i++;
          j++;
      }
      
  }
  cout<<mx;
   

    return 0;
}
