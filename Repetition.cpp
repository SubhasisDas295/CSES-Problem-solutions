#include<bits/stdc++.h>
using namespace std;
typedef string ss;
typedef long long int ui;
int main()
{
    ss s;
    ui count=1,res=1;
    cin>>s;
    for(ui i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            res=max(count,res);
        }
        else if(s[i]!=s[i+1])
        {
           res=max(count,res);
           count=1;
            
        }
    }
    cout<<res;
    return 0;
}