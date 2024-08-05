#include<iostream>
#include<vector>
using namespace std;

int spiralMatrix( vector<vector<int>>matrix ){
    int rows = matrix.size();
    int cols=matrix[0].size();
    int total_Elements=rows*cols;
    int startingCol=0;
    int endingCol=cols-1;
    int startingRow=0;
    int endingRow=rows-1;
    int count = 0;
    vector<int>ans;
    while(count<total_Elements){
        for (int i =startingCol; i <= endingCol && count<total_Elements; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;

        }
        startingRow++;
        for (int i = startingRow; i <= endingRow && count<total_Elements;i++){
            ans.push_back(matrix[i][endingCol]);
            count++;
            }
        endingCol++;
        for(int i=endingCol;i>=startingCol  && count<total_Elements;i--){
            ans.push_back(matrix[endingRow][i]);
            count++;

        }
        endingRow++;
        for(int i=endingRow;i>=startingRow && count<total_Elements;i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;

    }
    return ans.size();
}


int main(){
    
    vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
    int ans=spiralMatrix(matrix);
    cout<<ans<<endl;

}