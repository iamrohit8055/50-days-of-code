#include<bits/stdc++.h>
using namespace std;

int goodPair(vector<int>& nums){
    unordered_map<int, int> freq;
    int ans = 0;

    for(int x : nums){
        ans += freq[x];
        freq[x]++;
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3,1,1,3};
    int ans = goodPair(nums);

    cout<<ans<<endl;
}