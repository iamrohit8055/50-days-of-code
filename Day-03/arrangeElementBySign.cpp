#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> ans;
    ans.reserve(nums.size());

    int pos = 0;
    int neg = 0;

    while(pos < nums.size() && neg < nums.size()){

        while(pos < nums.size() && nums[pos] < 0)
            pos++;

        while(neg < nums.size() && nums[neg] > 0)
            neg++;

        if(pos < nums.size() && neg < nums.size()){
            ans.push_back(nums[pos]);
            ans.push_back(nums[neg]);
            pos++;
            neg++;
        }
    }

    while(pos < nums.size()){
        if(nums[pos] > 0) ans.push_back(nums[pos]);
        pos++;
    }

    while(neg < nums.size()){
        if(nums[neg] < 0) ans.push_back(nums[neg]);
        neg++;
    }

    return ans;
}

vector<int> rearrangeArrayOptimal(vector<int>& nums){
    vector<int> positive, negative;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] > 0) positive.push_back(nums[i]);
        else negative.push_back(nums[i]);
    }

    for(int i = 0; i<nums.size()/2; i++){
        nums[2*i] = positive[i];
        nums[2*i+1] = negative[i];
    }

    return nums;
}


int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    
    vector<int> ans = rearrangeArrayOptimal(nums);

    for(int i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}