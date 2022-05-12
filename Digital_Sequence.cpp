#include <bits/stdc++.h>
using namespace std;
int occurence(int *a, int n, int i){
	int sum = 0, temp;
	for(int x = 0; x < n; x++){
		temp = a[x];
		while(temp % 10 == 0 and temp != 0){
			temp = temp / 10;
		}
		while(temp / 10 > 0){
			if(temp % 10 == i){	
				sum += 1;
				break;
			}
			temp /= 10;
		}
		if(temp == i){
			sum += 1;
		}
	}
	return sum;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for( int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector <int> count(10,0);
	for(int i = 0; i < 10; i++){
		count[i] = occurence(a,n,i);
	}
	int max = count[0];
	for(int i = 1; i < 10; i++){
		if(count[i] > max){
			max = count[i];
		}
	}
	cout << max << "\n";
}