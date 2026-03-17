#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int low = 0, high = nums.size()-1;

    while(low <= high){
        int mid = low + (high - low)/2;
        
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) low = mid + 1;
        else high = mid - 1; 
    }

    return -1;
}

int main(){
    vector<int> nums = {3,6,8,10,25,69,357};
    int target = 25;

    int ans = binarySearch(nums, target);

    cout<<ans<<endl;
}