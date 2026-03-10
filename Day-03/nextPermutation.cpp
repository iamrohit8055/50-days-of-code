#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>& nums){
    int index = -1; 
    int n = nums.size();
    for(int i = n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }
    for(int i = n-1; i>index; i--){
        if(nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }

    reverse(nums.begin() + index+1, nums.end() );

    return nums;
}

int main(){

    vector<int> nums = {4,5,1,9,8,7,6};
    vector<int> ans = nextPermutation(nums);

    for(int i : ans){
        cout<<i<<" ";
    }
    cout<<endl;

}