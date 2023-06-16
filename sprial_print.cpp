#include<iostream>
#include<vector>
using namespace std;

int main(){
    // print starting row
    // print ending coloum
    // print ending row
    // print staring coloum

    int a[3][3]={1,2,3,4,5,6,7,8,9};
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count=0;
    int total = row*col;
    int starting_row=0;
    int starting_col=0;
    int ending_row=row-1;
    int ending_col=col-1;

    while(count<total){
        // print strting row
        for(int i=starting_col;i<ending_col;i++){
            ans.push_back(matrix[starting_row][i]);
            count++;
        }
        starting_row++;
        for(int i=starting_row;i<ending_row;i++){
            ans.push_back(matrix[i][ending_col]);
            count++;
        }
        ending_col--;
        for(int i=ending_col;i>=starting_col;i--){
            ans.push_back(matrix[ending_row][i]);
            count++;
        }
        ending_row--;
        for(int i=ending_row;i>=starting_row;i++){
            ans.push_back(matrix[i][starting_col]);
            count++;
        }
        starting_col++;

    }
    for(int i:ans){
        cout<<i<<" ";
    }

}