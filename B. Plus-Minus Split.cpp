#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; //for tasecase
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int counts =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+') counts ++;
            else counts--;
        }
        if(counts<0) counts *=(-1);
        cout<<counts<<endl;
    }
}
