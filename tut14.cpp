    //   ******FUNCTION AND FUNCTION PROTOTYPES********


#include<iostream>
using namespace std;

    //   Function protoptypes
    // type function-name (arguments)    
    // int sum(int a, int b)    //  --->>Acceptable
    // int sum(int a, b)      //--->>Unacceptable
     int sum(int a,int b) ; //--->>Acceptable
    void g();
    int main(){
        int num1,num2;
        cout<<"Enter the value of num 1"<<endl;
        cin>>num1;
         cout<<"Enter the value of num 2"<<endl;
    cin>>num2;
    cout<<"The sum is"<<endl<<sum(num1,num2);
    g();
//  Here num1 and num2 are the actual parameters
    
    
    return 0;
    }
     int sum(int a,int b)  {    
    // Formal Parameters  -->>Here a and b will taking value from actual parameters a and b
    int c=a+b;
    return c;
     }
     void g(){
        cout<<endl<<"Hello,Good Morning";
     }


