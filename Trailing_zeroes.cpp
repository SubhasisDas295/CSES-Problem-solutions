#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=5;n/i>=1;i*=5)
    {
        count+=n/i;
    }
    cout<<count;
    return 0;
}