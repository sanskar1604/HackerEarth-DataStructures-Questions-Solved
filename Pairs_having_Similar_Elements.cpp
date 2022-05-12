#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   int n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++)
      cin>>a[i];
   sort(a,a+n);
   int eq = 1, cnt = 1;
   ll res = 0;
   for(int i=1;i<n;i++){
      eq = 1;
      cnt = 1;
      while(a[i]-a[i-1] < 2){
         cnt++;
         if(a[i] == a[(i++)-1])
            eq++;
      }
         if(cnt > 1 && cnt != eq)
            res += ((ll)(cnt)*(ll)(cnt-1))/2;
   }
   cout<<res<<endl;
   return 0;

}