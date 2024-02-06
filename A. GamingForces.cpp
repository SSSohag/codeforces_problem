#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt(0),ones(0);
        for(int i =0;i<n;i++){
            int p;
            cin>>p;
            if(p>1) cnt++;
            else{
                ones++;
                if(ones>=2){
                    ones =0;
                    cnt++;
                }
            }
        }
        cnt+=ones;
        cout<<cnt<<endl;
    }
}
