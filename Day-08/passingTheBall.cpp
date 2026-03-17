#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(int i = 0; i<n; i++){
            if(s[i] == 'L'){
                cout<<(i+1)<<endl;
                break;
            }
        }
    }

    return 0;
}