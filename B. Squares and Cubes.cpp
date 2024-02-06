#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    set<ll> s;
    for(int i=1;i*i<=1e9;i++){
        s.insert (i*i);
    }
    for(int i=1;i*i*i<=1e9;i++){
        s.insert (i*i*i);
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt(0);
        for(set<ll>::iterator it = s.begin(); ((*it) <= n) && it != s.end(); it++){
            ++cnt;
        }
        cout<<cnt<<endl;
    }
}
