#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        long double sum(0),mx(-1e11);
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            mx=(mx>a[i]) ? mx : a[i];
        }
        double res = mx+((sum-mx)/(n-1));
        cout<<fixed <<setprecision(9)<<res<<endl;
    }
}

