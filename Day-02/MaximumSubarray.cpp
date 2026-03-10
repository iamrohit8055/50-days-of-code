#include<bits/stdc++.h>
using namespace std;

// Brute force approach  (using nested loop, time complexity becomes O(n^2))

int maximumSubarray(vector<int>& nums){
    int maxi = 0;
    for(int i = 0; i< nums.size(); i++){
        int currMax = 0, sum = 0;
        for(int j = i; j<nums.size(); j++){
            sum += nums[j];
            currMax = max(sum, currMax);
        }
        maxi = max(maxi, currMax);
    }

    return maxi;
}

// Optimal approach  (also known as Kadane's algorithm) 

int maximumSubarray1(vector<int>& nums){
    int max_sum = nums[0];
    int curr_sum = nums[0];
    for(int i = 1; i<nums.size(); i++){
        curr_sum = max(curr_sum + nums[i], nums[i]);
        max_sum = max(max_sum, curr_sum);
    }

    return max_sum;
}


int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int ans = maximumSubarray(nums);
    cout<<ans<<endl;
}