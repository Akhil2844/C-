            //***** CALL BY VALUE AND CALL BY REFERENCE *****

#include<iostream>
using namespace std;


    
    // This will not swap a and b
    int swap(int a, int b){      //  temp a  b
        int temp=a;              //   4    4  4
        a=b;                     //   4    5  5
        b=temp;                  //   4    5  4 
    }

    // CALL by Reference by using pointers
    void swapPointer(int* a, int* b){      //  temp a  b
        int temp=*a;              //   4    4  4
        *a=*b;                     //   4    5  5
        *b=temp;                  //   4    5  4 
    }

    // CALL by Reference by using C++ Reference Variables
    // void swapReferenceVar(int &a, int &b){      //  temp a  b
    //     int temp=a;              //   4    4  4
    //     a=b;                     //   4    5  5
    //     b=temp; 
    //     return a;                 //   4    5  4 
    // // // }
    int & swapReferenceVar(int &a, int &b){      //  temp a  b
        int temp=a;              //   4    4  4
        a=b;                     //   4    5  5
        b=temp; 
        return a;                 //   4    5  4 
    }
int main(){

int x=4,y=5;

cout<<" The value of x is "<<x<<". The value of y is "<<y<<endl;
// swap(x,y);         //This will not swap a and b
// swapPointer(&x,&y);     //This will swap a and b
// swapReferenceVar(x,y)=
swapReferenceVar(x,y)=766;
cout<<" The value of x is "<<x<<". The value of y is "<<y<<endl;
    return 0;
}