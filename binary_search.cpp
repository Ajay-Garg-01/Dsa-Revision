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

int linearsearch(int arr[], int n, int key){
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            cout<<"Key Found at:\t"<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Key is not in the Array"<<endl;
    return 0;
}

int binarySearch(int arr[], int n , int key ){

    int start=0;
    int end = n-1;
    // int mid = (start+end)/2;  --} it can be dangerous, Because in worst cases if start and end both value are at border of inteager range and at the time of adding the result crosse the range of int may produce wrong result, ;_(
    
    int mid = start+ ( (end-start)/2 ); // this can give always result in the range of inteager
    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid+1;
            
        }
        else {
            end = mid -1;
        }
        mid = start+ ( (end-start)/2 );
    }
    return -1;

    // Its Time Complexity is log N in Worst case ;

}


int main (){
    // basic Linear Search have Complexity --> O(N);
    // where we compare each and every value to the every element of array
    // Code
    int n ;
    cin>>n;
    int arr[1000];
    inparray(arr,n);
    int key ;
    cout<<"Enter The Key for Search: \t";
    cin>>key;

    linearsearch(arr,n,key);


// Binary Search --> * Imp Condition --> Element must in Sorted Form -> increasing or Decreasing i.e monotonic in Nature.
//  here we focus on mid , start and end --> mid = start+end/2.


/*
    Steps which are follows in Binary Searching: -
    1. Finding the Mid Element
    2. Compare the Mid Element with key; and return index.
    if --} Mid = Key --} found
    else if --} Mid > key --} end= mid-1 & find new mid.
    else --} start = mid+1 & find new mid.


*/
    int index = binarySearch(arr,n,key);
    if(index==-1) cout<<"Key Not Found"<<endl;
    else cout<<"Key found at\t"<<index+1<<endl;
    printarray(arr,n);
    return 0;

}