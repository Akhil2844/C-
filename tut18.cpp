                //  FUNCTIONS OVERLOADING WITH EXAMPLES


#include<iostream>
using namespace std;

int sum(int a, int b){
 cout<<" using function with 2 arguments ";
    return a+b;
}
int sum(int a, int b,int c){
cout<<" using function with 3 arguments ";
    return a+b+c;
}

// calculate the volume of clyinder
int volume(int r,int h)
{
    return 3.14*r*r*h;
}
int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of clyinder with radius 3 and height 6 is "<<volume(3,6)<<endl;
    return 0;
}