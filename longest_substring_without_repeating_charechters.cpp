#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   map<int,int>mp;
   int r=0,l=0,len=0;
   while(r<s.size())
   {
       if(mp[s[r]]!=0)
        l=max(mp[s[r]]+1,l);
        mp[s[r]]=r;
        len=max(len,r-l+1);
        r++;
   }
   cout<<len;

    return 0;
}
