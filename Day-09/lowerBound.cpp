#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> nums, int target, int n){
    int ans = n;
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        
        if(nums[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3,3,5,8,8,10,10,11};
    int n = nums.size();
    int target = 8;

    int lb = lowerBound(nums, target, n);

    cout<<lb<<endl;


    // also we have a function in c++ as lower_bound

    auto ans = lower_bound(nums.begin(), nums.end(), target);

    cout<<(ans - nums.begin())<<endl;
}