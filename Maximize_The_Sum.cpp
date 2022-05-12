#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	cin>>n;
	for(ll int i=0;i<n;i++)
	{
		ll int m,counter;
		cin>>m>>counter;
		ll int arr[m];
		for(ll int j=0;j<m;j++)
			cin>>arr[j];
		sort(arr,arr+m);
		ll int s=arr[m-1];
		ll int su=0,sum=0;
		vector<ll int> v;
		for(int j=m-1;j>=0;j--){
			if(arr[j]>0 && s==arr[j]){
				su+=arr[j];
			}else{
				v.push_back(su);
				s=arr[j];
				su=arr[j];
			}
		}
		if(su>0)
			v.push_back(su);
		sort(v.begin(),v.end());
		for(int i=v.size()-1;i>=0;i--){
			if(v[i]>0 && counter>0){
				counter--;
				sum+=v[i];
			}
		}
		cout<<sum<<endl;
	}
}