#include<bits/stdc++.h>
using namespace std;

// brute force approach;

int subarraySum(vector<int>& nums, int k){
    int count = 0;
    for(int i = 0; i<nums.size(); i++){
        int sum = 0;
        for(int j = i; j<nums.size(); j++){
            sum += nums[j];
            if(sum == k) count++;
        }
    }

    return count;
}

// optimal approach

int subarraySumOptimal(vector<int>& nums, int k){
    
    unordered_map<int,int> mp;
    
    mp[0] = 1;
    int sum = 0;
    int count = 0;

    for(int num : nums){
        sum += num;

        if(mp.find(sum - k) != mp.end()){
            count += mp[sum - k];
        }

        mp[sum]++;
    }

    return count;
}


int main(){
    vector<int> nums = {2,2,4,9,6,7,4};
    int k = 4;

    int ans = subarraySumOptimal(nums, k);

    cout<<ans<<endl;
}


