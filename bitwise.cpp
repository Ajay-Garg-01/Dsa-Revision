#include<bits/stdc++.h>
using namespace std;

int main (){
    int a =3,b=1;
    a = a<<1; //( left Siht help to Left Shift Bit with target value also use for easy Multiplication {if by 1 = x*2, ans so on})
    a = a>>1; //( Right Siht help to Right Shift Bit with target value also use for easy Division {if by 1 = x/2 adn change into data type, ans so on})
    ~a; // Negation or Bitwise Not help in easy 1's Complement;
    a = (a^b); // Bitwise XOR 1 when both bit are different and 0 in rest;
    a = (a&b); // Bitwise AND When both 1 = 1, rest 0;
    a = (a|b); // Bitwise OR When Anyone 1 = 1 rest 0;
    cout<<a<<endl;


    // ************************ --> If A Very Big Number Want to Be Left Shift It Might Convert into Negative Term instead of 2X
    // ************************ --> In Case of Left & Right Shift if we perform on Positive its Padding (New Bit to be added to Complete the Number) is always be 0 , but if performm in Negative number then Padding will be Compiler Dependent
    return 0;

}