#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m =a[0]-a[n-1];
    if(m<0) m*=(-1);
    int l =m;
    int p=1,q=n;
    for(int i=0;i<n-1;i++){
        int o = a[i]-a[i+1];
        if(o<0) o*=(-1);
        if(o<m){
            p=i+1;
            q=i+2;
            m =o;
        }
    }
    cout<<p<<' '<<q;
}
