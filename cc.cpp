#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll r,c;
    int t;
    cin>>t;
    while(t--)
    {
        //int cnt=0;
        cin>>r>>c;
            if((r==3&&c==5)||(c==3&&r==5))
                cout<<"Yes\n";
            else if((r&1)&&(c&1))
                cout<<"No\n";
            else if(r==c)
                cout<<"No\n";
            else
                cout<<"Yes\n";


    }
}