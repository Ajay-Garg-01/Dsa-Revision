#include<bits/stdc++.h>
using namespace std;
void inparray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
void printarray(int arr[], int size){
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;        
}

void printspiral(vector<vector<int>> matrix ,int size){
    vector<int> ans;
    int n = matrix.size();    // No. of rows
    int m = matrix[0].size(); // No. of column

    // Make Four Pointer Which Points the Corners of the Matrix;
    int top=0, bottom = n-1, left = 0, right = m-1;
    // four Loops for Printing matrix in spiral ;
    while(top<=bottom && left<=right)
    {
        // For Moving Left to Right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // For Moving top to Bottom 
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // For Moving right to Left 
        if(top<=bottom){
            for (int i = right; i >= left; i--)
        {
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        

        // For Moving Bottom to Top 
        if(left<=right)
        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(matrix[i][left]);
        }
        left++;
    }


    // Printing Answer;
    for (int  beta = 0; beta < ans.size(); beta++)
{
    cout<<ans[beta]<<" ";
}
    cout<<endl;
   
}
int main (){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int size =4;
    printspiral(arr,size);
    return 0; 

}

