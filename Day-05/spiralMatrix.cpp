#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>>& matrix){
    
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;

    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;

    while(left <= right && top <= bottom){
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int i = top; i<= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        if(top <= bottom){

            for(int i = right; i >= left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }


        if(left <= right){

            for(int i = bottom; i>= top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

    }

    return ans;
    
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = spiral(matrix);

    for(int i = 0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}