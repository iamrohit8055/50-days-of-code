#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    vector<pair<int,int>> pairs;
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            if(matrix[i][j] == 0){
                pairs.push_back({i,j});
            }
        }
    }

    for(int j = 0; j<pairs.size(); j++){
        for(int i = 0; i<matrix.size(); i++){
            matrix[i][pairs[j].second] = 0;
        }
        for(int i = 0; i< matrix[0].size(); i++){
            matrix[pairs[j].first][i] = 0; 
        }
    }
}



void setZeroesOptimal(vector<vector<int>>& matrix){
    int col0 = 1;
    for(int i =0; i<matrix.size(); i++){
        if(matrix[i][0] == 0) col0 = 0;

        for(int j = 1; j<matrix[i].size(); j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }

    }
    for(int i = matrix.size()-1; i>=0; i--){
        for(int j = matrix[i].size()-1; j>=1; j--){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }

        if(col0 == 0){
            matrix[i][0] = 0;
        }
    }

        
}


int main(){
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    setZeroesOptimal(matrix);
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}