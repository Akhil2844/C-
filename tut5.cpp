//There are two types of header files
// 1.system header files: it comes with compiler
#include<iostream>
// 2.user defined header files:It is written by programmer
// #include"this.h"     this will produce an error if this.h not present in the current directory

using namespace std;

int main()
{
    int a=4,b=5;
    cout<<"Operaters in  C++"<<endl;
    cout<<"Following are the operators in C++"<<endl;
     
    //    ARITHMETIC OPERATORS
    cout<<"Following are the arithematic operaters"<<endl;
    cout<<"The value of a+b is"<<a+b<<endl;
    cout<<"The value of a-b is"<<a-b<<endl;
    cout<<"The value of a*b is"<<a*b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;
    cout<<"The value of a%b is"<<a%b<<endl;
    cout<<"The value of a++ is"<<a++<<endl;
    cout<<"The value of ++a is"<<++a<<endl;
    cout<<"The value of ++b is"<<++b<<endl;
    cout<<"The value of b++ is"<<b++<<endl;
    cout<<"The value of a-- is"<<a--<<endl;
    cout<<"The value of --a is"<<--a<<endl;
    cout<<"The value of --b is"<<--b<<endl;
    cout<<"The value of b-- is"<<b--<<endl;

            //    ASIGNMENT OPERATORS
            // Assignment opertors-->used to assign values to variable
            // int a=3,b=9;c 


            //  COMPPARISON OPERATORS
            cout<<"Following are the comparison operators "<<endl;
     cout<< "The value of a==b is "<<(a==b)<<endl;
     cout<< "The value of a!=b is "<<(a!=b)<<endl;
     cout<< "The value of a>=b is "<<(a>=b)<<endl;
     cout<< "The value of a<=b is "<<(a<=b)<<endl;
     cout<< "The value of a>b is "<<(a>b)<<endl;
     cout<< "The value of a<b is "<<(a<b)<<endl;

                    //    LOGICAL OPERATORS
                        //  COMPPARISON OPERATORS
     cout<<"Following are the logical operators"<<endl;                   
     cout<< "The value of  logical operator is "<<((a==b)&&(a<b))<<endl;
     cout<< "The value of  logical operator is "<<((a==b)||(a<b))<<endl;
     cout<< "The value of  logical operator is "<<(!(a==b))<<endl;
    
    return 0;
}