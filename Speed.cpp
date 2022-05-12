#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, count = 1;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int min = a[0];
		for(int i = 1; i < n; i++){
			if(a[i] > min){
				continue;
			}else if(a[i] < a[i-1]){
				min = a[i];
				count++;
			}
		}
		cout << count << "\n";
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
