#include<bits/stdc++.h>
using namespace std;

int main (){
    /*
    @ Dabbang Pattern
    1234554321
    1234**4321
    123****321
    12******21  
    1********1
    */
    int n;
    cin>>n;
    int count =1;
    int a=0;

   for (int i = n; i >=1; i--)
   {
    count=1;
        for (int j = 1; j <=i; j++)
        {
        cout<<count;
        ++count;
        }
        for (int k = 0; k < 2*a; k++)
        {
            cout<<"*";
        }
        
        for (int j = 1; j <=i; j++)
        {
        --count;
        cout<<count;
        }
    cout<<endl;
    a++;
    
   }
   
    return 0;

}