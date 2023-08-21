                //*****POINTERS*****

#include<iostream>
using namespace std;

int main(){
          // WHAT IS POINTER-dATA Type which holds the address of other data type

      int a=3;
      int* b;
      b=&a;
            //  & is a address of operator
      cout<<"The address of a is:"<<&a<<endl;
      cout<<"The address of a is:"<<b<<endl;

        //   *(value at) Dereference operstor
      cout<<"The value at address of b is:"<<*b<<endl;

    //   POINTER TO POINTER
    int**c=&b;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The address of b is:"<<c<<endl;
    cout<<"The value  at address c is:"<<*c<<endl;
    cout<<"The value at address value_at(value_at_c) is:"<<**c<<endl;

    return 0;
}