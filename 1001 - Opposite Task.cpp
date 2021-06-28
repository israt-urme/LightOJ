#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        if(a%2==0)
            cout<<a/2<<" "<<a/2<<endl;
        else
            cout<<a/2+1<<" "<<a/2<<endl;
    }
    return 0;
}

