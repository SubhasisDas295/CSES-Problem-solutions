#include<bits/stdc++.h>
using namespace std;
typedef long long  ui;
int main()
{
    ui n;
    cin>>n;
    ui a[n];
    for(ui i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ui res=0,diff=0;
    for(ui j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            diff=a[j]-a[j+1];
            a[j+1]=a[j];
            res=res+diff;
        }
    }
    cout<<res<<endl;
    return 0;
}