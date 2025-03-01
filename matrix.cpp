#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,i,j,ans;
    for(i=1;i<=5;++i)
    {
        for(j=1;j<=5;++j)
        {
            cin>>a;
            if(a==1)
            {
                 ans=abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
