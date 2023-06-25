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

void leftshift(int arr[], int size){
    int temp= arr[0];
    for (int  i = 0; i < size; i++)
    {
        arr[i]= arr[i+1];
    }
    arr[size-1] = temp;
}

void countmaxone(int arr[], int size){
    int count =0;
    int mac_count=0;
    for (int i = 0; i < size; i++)
    {
        
        if(arr[i]==1){
            count++;
        }
        else count=0;
        mac_count= max(count,mac_count);
    }
    cout<<mac_count<<endl;
}

void movezero(int arr[], int size){
    int i = 0;
    for (; i < size; i++)
    {
        if(arr[i]==0) break;
    }
    // cout<<i<<" ";
    int j = i+1;
    while(i<size&&j<size){
        if(arr[j]!=0){
            // int temp = arr[j];
            arr[i]=arr[j];
            arr[j]=0;
            i++;

        }
        j++;
    }    
}

void revarray(int arr[], int start, int end){
    for (; start<=end;)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
    
}
void Removedupe(int arr[], int size){
    int i =0;
    for (int j = 1; j < size; j++)
    {
        if(arr[i]!=arr[j]){
            i++;
            arr[i] =arr[j];
        }
    }
    printarray(arr,i+1);   
}

void findmissing (int arr[], int size){
    //size = 5 --> array - 0 1 2 3 4  values = 1 2 '_' 4  5
    int xor1=0, xor2=0;
    for (int i = 0; i < size - 1; i++) {
        xor2 = xor2 ^ arr[i]; // XOR of array elements ==> 0^1,1^2, 2^4,......
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1] ==> 0^1,1^2...... to all n-1
    }
    xor1 = xor1 ^ size; //XOR up to [1...N]  now xor till n; hence all value will be --> 0^1^2^3^4^5
    xor1 = xor1^xor2;
    cout<<xor1<<endl;
}
int main (){
    
    int n ;
    cin>>n;
    int arr [1000];
    inparray(arr,n);
    cout<<endl;

    // leftshift(arr,n);
    // countmaxone(arr,n);
    // movezero(arr,n);
    // Removedupe(arr,n);
    findmissing(arr,n+1);
    cout<<"********************\n";
    printarray(arr,n);



    return 0;

}