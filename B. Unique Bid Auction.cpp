#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long n; cin>>n;
        map<long, long> bids;
        set<long> dupes;

        for(long p = 1; p <= n; p++){
            long x; cin>>x;
            if(bids.count(x)){
                bids.erase(x);
                dupes.insert(x);
            }
            else if(!dupes.count(x)) bids[x] = p;
        }
        printf("%ld\n", bids.size() ? bids.begin()->second : -1);
    }
}
