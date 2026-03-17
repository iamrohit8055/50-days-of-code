#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    long long count = 0;

    while(n--){
        int x,y,z;
        cin>>x>>y>>z;

        if(x+y+z >= 2) count++;
    }

    cout<<count;

    return 0;

}