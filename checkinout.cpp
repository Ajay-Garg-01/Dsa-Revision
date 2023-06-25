#include<bits/stdc++.h>
using namespace std;

int main (){
    /*
    char ch;
    cout<<"Enter the Character  :\t";
    cin>>ch;
    int a= ch;
// ASCII Table Approach with TypeCasting;  --> we can Mannually check it by operators also :-0
    if (a>=97&&a<=122) cout<<"Lowercase..!! :-)";   
    else if (a>=65&&a<=90) cout<<"Uppercase..!! :-)";    
    else if (a>=48&&a<=57) cout<<"Numeric..!! :-)";    
    else cout<<"Invalid Character :_(";
*/   
// Sum of All Even Number Till n;
    int n ;
    cout<<"Enter the Number Till Sum Needed :\t";
    cin>>n;
    int sum =0;
    for (int i = 2; i <= n; i=i+2)
    {
        if (i%2==0)
        {
            sum +=i;
        }
        
    }
    if (n==0 || n==1) cout<<"The Final Sum is : "<<sum<<endl; 
    else cout<<"The Final Sum is : "<<sum<<endl;    
    
    return 0;
}