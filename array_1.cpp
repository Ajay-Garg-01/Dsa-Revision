#include<bits/stdc++.h>
using namespace std;

int main (){
    // intializing the ARRAY ;
    int arr1[3];
    // for Enter Input we can Directly give with "{}" or via "Loop" or "cin>> array[index]"";

    //  int arr[5] = {0}; --> convert completer array and on every index value stored is "0"
    // int arr[5] ={1,2}; --> till you give Value the array set as given other thann everything will be 0;
    char arr[5] = {'a','b'};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // if we pass array in function and update via its index like "arr[0]" --> then it will update the real ; due to given real address of array.
    return 0;

}