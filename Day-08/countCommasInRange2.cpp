#include<bits/stdc++.h>
using namespace std;

int countCommas(long long n){
    long long ans = 0;
    long long threshold = 1000;

    while(threshold <= n){
        ans += (n - threshold + 1);
        threshold *= 1000;
    }

    return ans;
}

int main(){
    long long n = 1234567;
    long long ans = countCommas(n);

    cout<<ans;
}