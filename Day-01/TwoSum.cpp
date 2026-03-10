#include<bits/stdc++.h>
using namespace std;

// Brute force approach

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {};
}


// Optimal approach

vector<int> twoSum1(vector<int>& nums, int target) {

    unordered_map<int,int> mp;

    for(int i = 0; i < nums.size(); i++){

        int needed = target - nums[i];

        if(mp.find(needed) != mp.end()){
            return {mp[needed], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}



int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum1(nums, target);

    cout << "Indices: " << ans[0] << " " << ans[1] << endl;

    return 0;
}




