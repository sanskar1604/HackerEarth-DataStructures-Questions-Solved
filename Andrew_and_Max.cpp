include <iostream> 
#include <iomanip>
#include<stdio.h>
using namespace std;
 
int main()
{int n;
cin>>n;
while(n--){
	double x,y,z;cin>>x>>y>>z;
	double s,is;
	is=(x-z+y)/2.0;
	s=(2.0)*(x*y-(is*is));
 cout<<setprecision(2)<<fixed;
        cout<<s<<endl;
}
    return 0;
}