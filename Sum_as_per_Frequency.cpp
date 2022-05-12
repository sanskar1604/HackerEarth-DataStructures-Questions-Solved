#include<iostream>
 
#include<unordered_map>
 
#include<vector>
 
#include<algorithm>
 
#include<cmath>
 
#define ll long long
 
using namespace std;
 
 
 
 
 
int main(){
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
ll n;
 
cin>>n;
 
vector<ll>arr(n,0);
 
 
 
 
for(ll i=0;i<n;i++){
 
cin>>arr[i];
 
}
 
 
 
 
unordered_map<ll,ll>freq;
 
unordered_map<ll,ll>storeFreqSum;
 
for(auto x : arr){
 
freq[x]++;
 
}
 
ll maxFreq = 0;
 
for(auto x : freq){
 
storeFreqSum[x.second]+=x.first*x.second;
 
maxFreq = max(maxFreq,x.second);
 
}
 
ll sz = storeFreqSum.size() + 1;
 
vector<ll>dp(sz,0);
 
dp[0]=0;
 
for(ll i=1;i<sz;i++){
 
if(storeFreqSum.find(i)!=storeFreqSum.end()) dp[i] = dp[i-1] + storeFreqSum[i];
 
else dp[i] = dp[i-1];
 
}
 
 
 
 
    ll q,l,r,sum;
 
    cin>>q;
 
 
 
 
    for(ll i=0;i<q;i++) {
 
        cin>>l>>r;
 
     if(storeFreqSum[l]==0 && storeFreqSum[r] == 0){
 
sum=0;
 
}
 
else{
 
maxFreq = r > maxFreq ? maxFreq : r;
 
sum = dp[maxFreq] - dp[l-1];
 
}
 
        cout<<sum<<"\n";
 
    }
 
}