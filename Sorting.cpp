#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int low , int high){
    int pivot = arr[low];
    int i = low; 
    int j = high ;
    while (i<j)
    {
        while(arr[i]<= pivot && i<=high-1){
            i++;
        }
        while(arr[i]> pivot && j>= low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
    
}

void quicks (int arr[] , int low , int high ){
    if(low<high){
        int partInd = partition(arr,low,high);
        quicks(arr,low,partInd-1);
        quicks(arr,partInd+1, high);
    }
}

int main (){
    int n ; 
    cout<<"Enter From Which type you want to Sort the array:-\n1.Selection Sort\t2.Insertion Sort\n3.Heap Sort\t\t4.Quick Sort\n5.Bubble Sort\t\t6.Merge Sort"<<endl;
    cin>>n;
    cout<<"Enter the Size and Array "<<endl;
    int size;
    cin>>size;
    int arr[1000];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    switch (n)
    {
    case 1: // Selection Sort
    {
        cout<<"Its Time Complexity is --> O(N^2) in both worst and Best Case\nand, Space Complecity --> O(1)"<<endl;
        for (int i = 0; i < size-1; i++)
        {
            int minInd = i;
            for (int j = i+1; j < size; j++)
            {
                if(arr[j]<arr[minInd]){
                    minInd = j;                 // in this we foucs to store the smallest element to left 
                }
            }
            swap(arr[minInd],arr[i]);
            
        }
        printarray(arr,size);
        cout<<"Use Cases :\n1. When The Size of Array is Very small we can Use this\nor have Memory Constraint."<<endl;
        
        break;
    }
    case 2: // Insertion Sort
    {
        cout<<"Its Time Complexity is --> O(N^2) in worst and O(N) in Best Case\nand, Space Complecity --> O(1)"<<endl;
        // In this Type of Sorting we foucs on Inserting the Element in its Unique way;-)
        /*  we assume first element is on right place then check one by one of new stored element where it lie in new sorted array 
        left or right  --> according to the position we shift the sorted array and insert the Element .
        */

       for (int i = 1; i < n; i++)
       {
            int temp = arr[i];
            int j = i-1;
            while(j>=0){
                if(arr[j]>temp){
                    arr[j+1]= arr[j];
                }
                else
                { break;}
                j--;
            }
            arr[j+1]= temp;
        
       }
       

        printarray(arr,size);
        break;
    }
    case 3: // Heap Sort
    {
        

        break;
    }
    case 4: // Quick Sort
    {
        // It is the one of the Best Sorting algorithim Where we qfollow the flow of 
        /*
        Step 1 -> Pick a pivot Point (any element from the given array).
                        Place it into its correct Place.
                        Place all Element till it became the Sorted Array 
        Important Rule --> Smaller on the left and Larger on the Right (for Every Element). and Repeat till we storted the whole array 
        */

        cout<<"It is a Divide and Conqueror type Algorithm\nwith Time Complexity is --> O() in both worst and Best Case\nand, Space Complecity --> O(1)"<<endl;

        // It Uses Concept of Reccursion so we have to call Function.
        
        quicks(arr,0,size-1);
        printarray(arr,size);
        break;
    }
    case 5: // Bubble Sort
    {
        cout<<"Its Time Complexity is --> O(N^2) in worst and O(N) in Best Case\nand, Space Complecity --> O(1)"<<endl;
        //  In this we focus to store largest element to the Right in Each Iteration

        for (int i = 1; i < n; i++)
        {
            bool flag = false;
            // To Improve Complexity for Best Case i.e we Assume the Given array is sorted so their is no elementat j is greater then j+1 hence we can break the loop which decrease the time Complexity in Best case.
            for (int j = 0; j < n-i; j++)
            {
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    flag = true;
                }
            }
            if(flag == false){
                break;
            }
            
        }
        

        printarray(arr,size);
        break;
    }
    case 6: // Merge Sort
    {
        

        break;
    }

        
    
    default:
    cout<<"Sorry But You Entered Wrong Value :-(  "<<endl;
        break;
    }
    return 0;

}