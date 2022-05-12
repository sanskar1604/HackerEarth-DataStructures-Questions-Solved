#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[35][35];
        int n;
        bool flag=true;
        cin>>n;
     	for (int i = 0; i <n; i++){
			for (int j = 0; j <n; j++){
				cin >> arr[i][j];
			}
		}
        for(int i=0;i<(n+1)/2;i++){
            for(int j=0;j<(n+1)/2;j++){
                if( arr[i][j]!=arr[i][n-1-j] || arr[i][j]!=arr[n-1-i][j] || arr[i][j]!=arr[n-1-i][n-1-j]) {
				flag=false;
                }
            }           
        }
        if(flag) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }

}