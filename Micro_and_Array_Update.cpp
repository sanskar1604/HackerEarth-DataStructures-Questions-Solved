#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, min;
		cin >> n >> k;
		int a[n], count = 0;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		
		min = a[0];
		for(int i = 0; i < n; i++){
			if(min > a[i]){
				min = a[i];
			}
		}
		if(min < k){
			count = k - min;
			cout << count << "\n";
		}else{
			cout << count << "\n";
		}
		
	}

	return 0;
}

/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
