#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp, a1 = 0, b1 = 0, sum1 = 0, sum2 = 0;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp == -1)
			a1++;
		else
			sum1 += temp;
	}
	for(int i=0;i<n;i++){
		cin >> temp;
		if(temp == -1)
			b1++;
		else
			sum2 += temp;
	}
	if(a1 && b1)
		cout << "Infinite\n";
	else if((a1 && sum1 > sum2) || (b1 && sum2 > sum1))
		cout << "0\n";
	else if((a1 == 1 && sum1 < sum2) || (b1 == 1 && sum2 < sum1))
		cout << "1\n";
	else
		cout << abs(sum1 - sum2) + 1<< "\n";
	return 0;
}