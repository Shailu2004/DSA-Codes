#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void spiralOrder(vector<vector<int>>& matrix) {
        vector<int>arr;
        
        int startrow=0;
        int startcol=0;
        int endcol=matrix[0].size()-1;
        int endrow=matrix.size()-1;

      
      while(startrow <= endrow && startcol <= endcol){


        //top row
        if(startcol != -1){
        for(int i=startcol; i<=endcol && startrow<=endrow;i++){
            arr.push_back(matrix[startrow][i]);
        }
        startrow++;
        }
        
        //right col
        if(startrow != -1){
        for(int j=startrow; j<=endrow ; j++){
            arr.push_back(matrix[j][endcol]);
        }
        endcol--;
        }
           
        //bottom row
        if(endcol != -1){
        for(int i=endcol; i>=startcol && startrow<=endrow; i--){
            arr.push_back(matrix[endrow][i]);
        }
        endrow--;
        }

        //left col
        if(endrow != -1){
        for(int i=endrow; i>=startrow; i--){
            arr.push_back(matrix[i][startcol]);
        }

        startcol++;
        }

      }
   

     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
        
        
    }
};

int main(){
    vector<vector<int>>arr={{7},{9},{6}};


    Solution s1;
    s1.spiralOrder(arr);

}