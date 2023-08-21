#include<iostream> 
using namespace std;
int glo=6;
void sum(){
    int a;
    glo=9;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=78;
    int a=4;
    int b=5;
    float pi=3.14;
    char x='d';
    bool c=true;
    sum();
    cout<<glo<<true; 
    // cout<<"This is tutorial 4. "<<"\nHere the value of a is\n"<<a<<"\nHere the value of b is\n"<<b;
    // cout<<"\nthe value of pi is\n"<<pi;
    // cout<<"\nthe value of c is\n"<<x;
    return 0;
}