#include <bits/stdc++.h>
using namespace std;
int main(){

    long t; cin>>t;
    while(t--){
        long n, H, M;
        cin>>n>>H>>M;//scanf("%ld %ld %ld", &n, &H, &M);
        long bed = 60 * H + M;
        long res(24 * 60);
        for(long p = 0; p < n; p++){
            long h, m; scanf("%ld %ld", &h, &m);
            long check = 60 * h + m - bed;
            if(check < 0){check += 24 * 60;}
            res = (res < check) ? res : check;
        }

        cout<<res / 60<<' '<< res % 60<<endl;
    }

}
