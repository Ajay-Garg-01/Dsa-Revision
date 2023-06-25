// C++ program to convert a decimal
// number to binary number

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32]={0};
    int power =0;

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
    for (int j = 31; j >= 0; j--)
		cout << binaryNum[j];
    cout<<endl;
    for (int k = 31; k >=0; k--)
    {
        if(binaryNum[k]==1) binaryNum[k]=0;
        else binaryNum[k]=1;
    }
    for (int j = 31; j >= 0; j--)
		cout << binaryNum[j];
    
    cout<<endl;
    if(binaryNum[0]==1){ 
            binaryNum[0]=0;
            power = 1;
        }
    else binaryNum[0]=1;

    for (int k = 1; k <=31; k++)
    { 
        if(power == 1 && binaryNum[k]==0 ){
            binaryNum[k]=1;
            power = 0;
        }
        else if(power ==1 && binaryNum[k]==1) {
            binaryNum[k]=0;
            power = 1;
        }
    }
    
	// printing binary array in reverse order
	for (int j = 31; j >= 0; j--)
		cout << binaryNum[j];
    cout<<endl;
}

// Driver program to test above function
int main()
{
	int n = -6;
    n = abs(n);
    // decimal to binary of a negative number :-o
	decToBinary(n);
	return 0;
}
