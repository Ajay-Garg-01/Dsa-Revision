#include<bits/stdc++.h>
using namespace std;
// Any Function Call's and remove work in --> Stack Memory (include main)
int fact(int n){
    int  ans =1;
    for (int i = 1; i <=n; i++)
    {
        ans = ans *i;
    }
    return ans;
}

int nCr (int n , int r){

    int num = fact(n);
    int den = fact(r)* fact(n-r);
    return num/den;
}


// nCr = n! / r! * (n-r)!  --> INPUT (N,R);
//  factorial or n! = n*n-1*n-2*n-3........*1;
int main (){
    
    int n,r;
    cin>>n>>r;
    int f;
    cout<<nCr(n,r)<<endl;
    return 0;

}