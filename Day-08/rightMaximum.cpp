#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        long long max = 0;
        int count = 0;

        for(int i = 0; i<n; i++){
            if(a[i] >= max){
                max = a[i];
                count++;
            }
        }

        cout<<count<<endl;   
    }

    return 0;
}