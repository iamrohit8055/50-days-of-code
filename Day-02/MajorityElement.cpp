#include<bits/stdc++.h>
using namespace std;

// brute force approach  (first sort the array and then return the middle element as it will definitly the majority element) 

// time complexity = O(n * log n);

int findMajorityElement(vector<int> nums, int n){
    sort(nums.begin(), nums.end());
    return nums[n/2];
}


//  Optimal approach     (also known as Moore's voting algorithm)

// Time Complexity = O(n) , Space complexity = O(1).

int findMajorityElement1(vector<int> nums, int n){
    int vote = 0, candidate;
    for(int i = 0; i<n; i++){
        if(vote == 0){
            candidate = nums[i];
        }
        if(candidate == nums[i]){
            vote++;
        }
        else{
            vote--;
        }
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] == candidate){
            count++;
        }
    }
    if(count > n/2){
        return candidate;
    }
    else{
        return -1;
    }
}


int main(){
    vector<int> nums = {2,2,1,1,1,2,2}; 
    int n = nums.size();

    int ans = findMajorityElement1(nums, n);
    cout<<ans<<endl;
}