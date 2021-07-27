#include<bits/stdc++.h>
using namespace std;
typedef long long int li;
int main()
{
    li n;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else if(n==3||n==2)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n%2==0)
    {
        for(li i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(li j=1;j<=n-1;j+=2)
        {
            cout<<j<<" ";
        }
    }
    else 
    {
		for (li i=1;i<=n;i+=2)
		{
			cout<<i<< " ";
		}
		for (li j=2;j<=n-1;j+=2)
		{
			cout<<j<< " ";
		}
    }  
    return 0;  
}