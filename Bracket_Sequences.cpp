#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	string str;
	cin>>str;
	int count{};
	for (int i{};i<str.length();i++){
		int iterator{i};
		bool included{true};
		stack<char> s;
		while(iterator<str.length()){
			if (str[iterator]=='(')
				s.push(str[iterator]);
			else if (s.empty()==true){
				included=false;
				break;
			}
			else
				s.pop();
			iterator+=1;
		}
		iterator=0;
		while(iterator<i){
			if (str[iterator]=='(')
				s.push(str[iterator]);
			else if (s.empty()==true){
				included=false;
				break;
			}
			else
				s.pop();
			iterator+=1;
		}
		if (s.empty()==true && included==true)
			count+=1;
	}
	cout<<count;

}