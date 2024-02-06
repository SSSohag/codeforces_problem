#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x,y,w,z;
        cin>>x>>y>>w>>z;
        bool ans = (x < y && x < z && y < w && z < w) ||
            (z < x && z < w && x < y && w < y) ||
            (w < z && w < y && z < x && y < x) ||
            (y < w && y < x && w < z && x < z) ;
        puts(ans ? "YES" : "NO");
    }
}
