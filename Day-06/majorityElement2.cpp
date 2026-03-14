#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums){

    vector<int> ans;

    int candidate1, candidate2;
    int count1 = 0, count2 = 0;

    for(int num : nums){
        if(num == candidate1) count1++;
        else if(num == candidate2) count2++;
        else if(count1 == 0){
            candidate1 = num;
            count1 = 1;
        }
        else if(count2 == 0){
            candidate2 = num;
            count2 = 1;
        }
        else{
            count1--;
            count2--;
        }
    }

    int freq1 = 0, freq2 = 0;
    for(int num : nums){
        if(num == candidate1) freq1++;
        else if(num == candidate2) freq2++;
    }
    if(freq1 > nums.size()/3) ans.push_back(candidate1);
    if(freq2 > nums.size()/3) ans.push_back(candidate2);

    return ans;
}

int main(){
    vector<int> nums = {1,2};
    
    vector<int> ans = majorityElement(nums);
    for(int i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}