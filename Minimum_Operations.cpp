#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
	int n, j = 0, count = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	while(j < n){
		while(a[j] == a[j+1]){
			j++;
		}
		count++;
		j++;
	}
	cout << count;
		
 
}