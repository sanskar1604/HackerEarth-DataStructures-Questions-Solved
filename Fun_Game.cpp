#include<bits/stdc++.h>
using namespace std;
int main(){
   int n; 
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++)
      cin >> a[i];
   int start = 0,top = n-1;
   vector<int> res;
   while(start != n && top != -1){
      if(a[start] > a[top]) {
         res.push_back(1);
         top--;
      }else if(a[start] < a[top]) {
         res.push_back(2);
         start++;
      }
      else if(a[start] == a[top]){
         res.push_back(0);
         start++;
         top--;
      }
   }
   for(auto i=0;i<res.size();i++)
   cout<<res[i]<<" ";
}