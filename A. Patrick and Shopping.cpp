#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int big=a,low=b;
    if(b>a){
        big=b;low=a;
    }
    int sum = low;
    if(a+b<c) sum+=a+b;
    else sum+=c;
    if(c+low<big) sum=sum+c+low;
    else sum+=big;
    cout<<sum;
}
