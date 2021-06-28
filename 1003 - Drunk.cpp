#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    string x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int c=0;
        cin>>a;
        for(int j=1;j<=a;j++)
        {
            cin>>x>>y;
            if(x=="water" || x=="soda" && y=="wine")
                c++;
        }
        if(c==a)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);

    }
    return 0;
}
