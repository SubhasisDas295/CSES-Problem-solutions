#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);*/
    long long n,sum=0,a;
    cin>>n;
    for(long long i=1;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<(n*(n+1)/2)-sum<<endl;
    return 0;
}