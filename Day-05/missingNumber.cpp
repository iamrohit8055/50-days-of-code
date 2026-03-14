#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;

    long long sum = (n*(n+1))/2;

    long long actualSum = 0;
    n = n-1;
    while((n)--){
        long long x;
        cin>>x;

        actualSum += x;

    }

    long long ans = sum - actualSum;

    cout<<ans;

    return 0;
}