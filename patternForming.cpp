#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout<<"List of Patterns\n\n 1- Square\n 2- Right Angle triangle\n 3- Reverse Right Angle triangle\n 4- Shape Like;\n{1\n 23\n 345\n 4567} etc\n 5- Inverted Right angle Triangle\n 6- Rhomboid\n 7- Numeric Triangle full\n"<<endl;
    cout<<"Choose Style Number You Want to Print :-) -->\t";
    cin>>n;
    char chr ='A';
    int check =0;
    int check2 =0;
    int count =0;
    int count2 =1;
    switch (n)
    {
    case 1:
            int a;
            cout<<"Enter Length of square   : \t";
            cin>>a;
            
            for (int i = 1; i <=a; i++)
            {
                // chr ='A';
                for (int j = 1; j <= a; j++)
                {
                    cout<<"*"; // * for --> square star, i for --> 111,222,333 , j for 123,123,123
                    // Special square;
                    // chr = ('A'+i+j-2);
                    // cout<<chr<<" ";
                    
                }
                
                cout<<endl;
            }
            
        break;
    case 2:
            int ab;
            cout<<"Right angle Triangle Length  :\t";
            cin>>ab;
            for (int i = 1; i <= ab; i++)
            {
                // chr ='A';
                for (int j = 1; j <=i; j++ )
                {
                    // chr =('A'+ab-i+j-1);
                    chr =('A'+ab-i+j-1);

                    cout<<chr<<" ";
                    // cout<<"*";
                    // j--; for Reverse and j>0
                    // chr++;
                }
                
                cout<<endl;
                
            }
            
    break;
    case 3:
          int abc;
            cout<<"Reverse Triangle Length    :\t";
            cin>>abc;
            for (int i = abc; i > 0; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout<<"*"; // * for --> square star, i for --> 111,222,333 , j for 123,123,123
                }
                cout<<endl;
                
            }
    break;
    case 4:
        /*  1
            23
            345
            4567
            56789
        */
       int abcd ;
       cin>>abcd;
       for (int i = 1; i <= abcd; i++)
       {
        for (int j = i; j < 2*i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
       }
       
    break;
    case 5:
        int st;
        cout<<"Inverted Right Angle Triangle max length    :\t";
        cin>>st;
        check = st;
        for (int i = 1; i <= st; i++)
        {
            count = i;
    
            for  (int j = st; j >= 1; j--) //(int j = 1; j <=st; j++)
            {
                 if(j<=check) {cout<<count; count++; }// Reverse
                // if(j>=check) cout<<"*";  
                else cout<<" ";
                

            }
            cout<<endl;
            check--;
            
        }
        
    break;
    case 6:
    {   
        int inp;
        cout<<"Enter Rhombus Size    :\t";
        cin>>inp;
        check =inp;
        check2=inp;
        for (int i = 1; i <= inp; i++)
        {
            for  (int j = 1; j <=inp; j++)
            {
                //  if(j<=check) cout<<"*"; // Reverse
                if(j>=check) cout<<"*";  
                else cout<<" ";

            }
            cout<<endl;
            check--;
            
        }
        for (int i = 1; i <= inp; i++)
        {
            for  (int j = inp; j >= 1; j--) //(int j = 1; j <=st; j++)
            {
                 if(j<=check2) cout<<"*"; // Reverse
                // if(j>=check) cout<<"*";  
                else cout<<" ";

            }
            cout<<endl;
            check2--;
            
        }
        
        for (int i = 1; i <= inp; i++)
            {
                // chr ='A';
                for (int j = 1; j <=i; j++ )
                {
                    // chr =('A'+ab-i+j-1);
                    chr =('A'+ab-i+j-1);

                    // cout<<chr<<" ";
                    cout<<"*";
                    // j--; for Reverse and j>0
                    // chr++;
                }
                
                cout<<endl;
                
            }
        
       
        for (int i = inp; i > 0; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<"*"; // * for --> square star, i for --> 111,222,333 , j for 123,123,123
            }
            cout<<endl;
                
        }        
    }
    break;
    case 7:
        int inpu;
        cin>>inpu;
        check=inpu;
        for (int i = 1; i <= inpu; i++)
        {
            count =1;
            count2=i;
            for (int j = 1; j <=inpu; j++)
            { 
            if (j>=check) 
            { 
                cout<<count;
                count++;
            }
            else cout<<" ";
            }
            for (int k = 1; k < i; k++)
            {   
                count2--;
                cout<<count2;
                
            }
            
            cout<<endl;
           
            check--;
            
        }
        

    break;
    default:
        cout<<"Invalid Requirement... ! Sorry ;-("<<endl;
        break;
    }
    return 0;

}