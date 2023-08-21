                    //******* RECURSION AND RECURSIVE FUNCTIONS IN C++******


#include<iostream>
using namespace std;




        //    FACTORIAL OF A NUMBER
// int factorial(int n){
//     if(n<=1)
//     {
//         return 1;
//     }
// return n*factorial(n-1);
// }
// int main(){
    //Factorial of a number:

    // 6!=6*5*4*3*2*1
    // 0!=1
    //n!=n*(n-1)!
//     int a;
// cout<<"Enter a number"<<endl;
// cin>>a;
// cout<<"The factorial of "<<a<<" is "<<endl<<factorial(a)<<endl;




              //FIBCNACCI SEIES
              int fib(int n){
    if(n<2)
    {
        return 1;
    }
return fib(n-2)+fib(n-1);
}
int main(){
              int a;
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"The fibnoccai series  "<<a<<" is "<<endl<<fib(a)<<endl;
    return 0;
}







// RECURISON IS NOT GOOD EVERY TIME BECAUSE IT CREATES A OVERHEAD BECAUSE IT BREAKS IN A SEVERAL PARTS FOR EXAMPLE FIBCANNI SERIES

// RECURSION IS THE FUNCTION WHICH CALL THE VALUE BY ITSELF MANY TIMES