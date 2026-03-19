#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin>>n>>m>>a;

    long long x = (m + a - 1)/a;
    long long y = (n + a - 1)/a;

    cout<<x*y<<endl;
}