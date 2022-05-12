#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
		ll m = 0, count = 0;
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0)
            {
                count++;
                m = max(m, count);
            }
            else
            {
                count = 0;
            }
        }
        if(m == 0)
            cout << -1 << endl;
        else
            cout << m << endl;
    }
}