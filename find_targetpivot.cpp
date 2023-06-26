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

int binarySearch(int arr[], int s, int e , int key ){

    int start=s;
    int end = e;
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

int getpivot(int arr[], int n ){
    int s= 0;
    int e= n-1;
    int mid = s+ ( (e-s)/2 );
    while (s<e)
    {
        if(arr[mid]>= arr[0]){
            s = mid +1;
        }
        else  e= mid;
        mid = s+ ( (e-s)/2 );
    }
    return s;
    
}
int main (){
    // This Question is all about Searching in an sorted array which is then rotated and form new array.
    int n ;
    cin>>n;
    int arr[1000];
    inparray(arr,n);
    int key ;
    cout<<"Enter The Key for Search: \t";
    cin>>key;
    // int pivot = getpivot(arr,n);   
    int pivot =0;
    /*for (int i = 0; i < n; i++)
    {
        if(arr[pivot]>arr[i+1]){
            pivot++;
            break;
        }
        pivot++;
    }
    // cout<<pivot<<endl;  --. other approach can be more reduced as per complexity where we find pivot index by other way
    */
    if(key>= arr[pivot] && key<= arr[n-1]){
        cout<<binarySearch(arr,pivot,n-1,key);
    }
    else cout<<binarySearch(arr,0, pivot-1,key);
    
    return 0;

}