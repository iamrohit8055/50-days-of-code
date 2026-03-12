#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> temp(n, vector<int>(m));
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            temp[j][i] = matrix[i][j];
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            matrix[i][j] = temp[i][n-j-1];
        }
    }

}



void rotateOptimal(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i = 0; i<m; i++){
        for(int j = i+1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i =0; i<n ; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotateOptimal(matrix);

    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}