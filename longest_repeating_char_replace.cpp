#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int k;
   cin>>k;
   int l=0;,r=0,len;
   unordered_map<char,int>mp;
   while(r<s.size())
   {  mp[s[r]]++;
     maxi=max(maxi,mp[s[r]]);
      if((r-l+1)-maxi<=k)
       len=max(len,r-l+1);
       else
       {
           mp[s[l]]--;
           l++;
       }
       r++;
       
   }
   cout<<len;

    return 0;
}
