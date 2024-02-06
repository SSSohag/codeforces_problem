#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            if(p%2!=0){
                v1.push_back(p);
            }
            else {
                v2.push_back(p);
            }
        }
        int ans =0;
        for(int i=0;i<v2.size();i++){
            ans+=n-i-1;
        }

        for(int i=0;i<v1.size();i++){
            for(int j = i+1; j<v1.size();j++){
                if(__gcd(v1[i],v1[j])>1) ans++;
            }
        }
        cout<<ans<<endl;

    }
}
