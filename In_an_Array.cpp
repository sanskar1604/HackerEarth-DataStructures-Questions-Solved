#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

	int N, K, X, Y; 
	cin >> N >> K >> X >> Y;
	ll a[N]={0};
	for(int i = 0; i < N; i++){
		int b; 
		cin >> b;
		a[b]++;
	}

	ll ans = 0;
	for(int i = 1; i < N; i++){
		if(a[i] == 0)
			continue;
		for(int j = i; j < N; j++){ 
			if((i + j) % K == X && (i * j) % K == Y){
				if(i==j)
					ans += (a[i] * (a[i] - 1)) / 2;
				else  
					ans += a[i] * a[j];
			}
		}
	}
	cout << ans ;
    


	return 0;
}