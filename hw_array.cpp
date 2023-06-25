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
int printsum(int arr[],int size){
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum = sum +arr[i];
    }
    return sum;    
}

void revarray(int arr[],int size){
    for (int i = 0; i < size/2; i++)
    {   // int temp = arr[i];  --> Basic Brute Force Approach :-)
        // arr[i]= arr[size-i-1];
        // arr[size-i-1] =temp;
        swap(arr[i],arr[size-i-1]);  

        //  more Brute Force just print all element in negative Order
    }
}

void swapalt(int arr[],int size){
    for (int i = 0; i < size; i = i+2)
    {   
        if(i+1<size) {swap(arr[i],arr[i+1]);}
    }    
}

int uniel (int arr[], int size){
    // sort(arr,arr+size);      --> Brute Force Simple Technique
    // int ans = 0;
    // for (int i = 1; i <= size; i++)
    // {
    //     if(arr[i-1]==arr[i]) i++;
    //     else ans = arr[i-1];
    // }
    // return ans;

    //  From XOR to improve optimality , base --> a^a =0; & 0^a = a;
    int ans=0;
    for (int  i = 0; i < size; i++)
    {
        ans = ans^ arr[i];
    }
    return ans;
    
    
}

int dupel (int arr[], int size){
    // Approach - 1;
    /*
    sort(arr,arr+size);
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==arr[i+1])  {
            int temp = arr[i];
            return temp;
        }
    }
    return false;
    */
//     Approach = 2 :: Given Value of Array Are between 1 and n-1 (n= Size of ARRAY), so we can xorcomplete array by itself and again by 1 to n-1 then --> 
//  Ex --> arr[6]= {1,2,3,4,1,5} start iteration ans = {ans}^{1,2,3,4,1,5} then ans ^{1,2,3,4,5} ==> {1} due to every other come 2 time and duplicate value came "thrice" in solving

int ans =0;
 for (int  i = 0; i < size; i++)
 {
    ans = ans^arr[i];
    // cout<<ans<<" ";
 }
 cout<<endl;
 for (int j = 1; j < size; j++)
 {
    ans = ans^j;
    // cout<<ans<<" ";
 }
 cout<<endl;
 return ans;
 
 

}

void printinter(int arr[],int size1,int arr2[], int size2){
    int interarr[1000];
    int count = 0;
    /*for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr[i]==arr2[j]){
                // interarr[count]=arr[i];  --> Basic Approach of storing it in array
                arr2[j] = INT_MIN;
                // count++;
                cout<<arr[i]<<" ";
                // In above we check each element of array 1 to every element to array two :-(
            }
        }
        
    }
    cout<<endl;
    // printarray(interarr,count);   
    */
    // more Optimise way is to solve this in one loop with two variable(pointer said as -- check notes for further Refrence)
    int i = 0;
    int j = 0; 
    while (i<size1 && j<size2){
        if(arr[i]<arr2[j]) i++;
        else if(arr[i]==arr2[j]){   
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else j++;
        //  time Complexicity Reduces aloth --> O(max(size1,size2))
    }
    cout<<endl;
}

void pairsum(int arr[], int size, int sum){
    /*for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<min(arr[i],arr[j])<<" + "<<max(arr[i],arr[j])<<" = "<<sum<<endl;
            }
        }   
    } compleddxity --. O(n^2)
    */
//     Via Two Pointer in an loop;
    sort(arr,arr+size);
    int left = 0, right = size-1;
    bool flag = false;
    while(left<right){
        int sumhere = arr[left]+arr[right];
        if(sumhere==sum){ cout<<"Present\nthe pair is "<<arr[left]<<" "<<arr[right]<<endl; left++; right--; flag = true;}
        else if(sumhere<sum) left++;
        else right--;
    }
    if(flag==false){
    cout<<"No Pair Found"<<endl;}
    // Time Complexity ==> sort-> O(NlogN) and Loop -> N therefore total = O(N+NlogN)
    
}

void inpvector (vector<int> arr, int n ){
    for (int i = 0; i < n; i++)
    {
        int temp=0;
        cin>>temp;
        arr.push_back(temp);
    }
    
    
}
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for (int i = 0 ; i < n ; i+=3){
		if((arr[i]+arr[i+1]+arr[i+2]) == K){
			vector<int> temp;
			temp.push_back(arr[i]);
			temp.push_back(arr[i+1]);
			temp.push_back(arr[i+2]);
			ans.push_back(temp);
		}

	}	
    return ans;
}

void printvectorofvec(vector<vector<int>> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int  j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main (){
    int choice;
    cout<<"Enter Your Number as per you want answer of Homework Question"<<endl;
    cin>>choice; 

    switch (choice)
    {
    case 1: //"Printing Sum of Array"
    {
            cout<<endl<<"Printing Sum of Array"<<endl;
            int n;
            cin>>n;
            int arr[100];
            inparray(arr,n);
            cout<<"Total Sum is -->\t"<<printsum(arr,n)<<endl;
        break;
    }
    case 2: // "Reverse Array"
    {
            cout<<endl<<"Reverse Array"<<endl;
            int n;
            cin>>n;
            int arr[100];
            inparray(arr,n);
            revarray(arr,n);
            cout<<"Printing the array After Reversing"<<endl;
            printarray(arr,n);

        break;
    }
    case 3: // "Swap Alternate Element of Array"
    {
            cout<<endl<<"Swap Alternate Element of Array"<<endl;
            int n;
            cin>>n;
            int arr[100];
            inparray(arr,n);
            swapalt(arr,n);
            printarray(arr,n);
        break;
    }
    case 4: // "Find Unique Element in Array"
    {
            cout<<endl<<"Find Unique Element in Array"<<endl;
            int n;
            cin>>n;
            int arr[100];
            inparray(arr,n);
            cout<<uniel(arr,n)<<endl;
            // printarray(arr,n);
        break;
    }
    case 5: // "Find Duplicate Element in Array"
    {
            cout<<endl<<"Find Duplicate Element in Array"<<endl;
            int n;
            cin>>n;
            int arr[100];
            inparray(arr,n);
            int dupli = dupel(arr,n);
            cout<<endl<<"Duplicate Value In the Array is :\t"<<dupli<<endl;
            // if(dupli == false) cout<<" Hurrah!\t :-) No Duplicate Value Found"<<endl;
            // else cout<<"Duplicate Value In the Array is :\t"<<dupli<<endl;

        break;
    }
    case 6: // "Intersection of two Array"
    {
            cout<<endl<<"Intersection of two Array"<<endl;
            int n,n1;
            cout<<"Enter Size of Array 1:\t";
            cin>>n;
            cout<<"Enter Size of Array 2:\t";
            cin>>n1;
            int arr1[100];
            int arr2[100];

            inparray(arr1,n);
            inparray(arr2,n1);

            printinter(arr1,n,arr2,n1);

        break;
    }

    case 7: // Find Pair Sum with Given Number
    {
        cout<<endl<<"Find Pair Sum with Given Number"<<endl;
            int n;
            cin>>n;
            int arr[100];
            inparray(arr,n);
            int sum ;
            cout<<"Enter Sum Value\t:";
            cin>>sum;
            pairsum(arr,n,sum);          

    break;
    }

    case 8:// Find Triplet Sum with Given Number
    {
        cout<<endl<<"Find Triplet Sum with Given Number"<<endl;
            int n;
            cin>>n;
            vector<int> arr;
            inpvector(arr,n);
            int sum ;
            cout<<"Enter Sum Value\t:";
            cin>>sum;
            vector<vector<int>> ans;
            // ans.push_back(findTriplets(arr,n,sum));  
            // printvectorofvec(ans);       

    break;
    }
    case 9:
    {
    break;
    }
    case 10:
    {
    break;
    }
    
    default:
        break;
    }
    

    return 0;

}