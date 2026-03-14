#include<bits/stdc++.h>
using namespace std;

// very bad approach

// int factorial(int n){
//     if(n == 0 || n == 1) return 1;
//     else{
//         return n * factorial(n-1);
//     }
// }

// vector<vector<int>> generate(int numRows){
//     vector<vector<int>> ans;
//     for(int i = 0; i<numRows; i++){
//         vector<int> temp;
//         for(int j = 0; j<=i; j++){
//             temp.push_back(factorial(i)/(factorial(i-j)*factorial(j)));
//         }
//         ans.push_back(temp);
//     }

//     return ans;
// }

vector<vector<int>> generate(int numsRows){
    vector<vector<int>> final;
    for(int i = 1; i <= numsRows; i++){
        vector<int> tempRow;
        int ans = 1;
        tempRow.push_back(ans);
        for(int j = 1; j<i; j++){
            ans *= (i-j);
            ans /= j;
            tempRow.push_back(ans);
        }
        final.push_back(tempRow);
    }

    return final;
}

int main(){
    int numRows = 7;
    vector<vector<int>> ans = generate(numRows);

    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
