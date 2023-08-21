            //*****ARRAYS AND POINTERS*****



#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,78,90,87};
    int mathmarks[4];
    mathmarks[0]=78;
    mathmarks[1]=67;
    mathmarks[2]=45;
    mathmarks[3]=80;

    
    cout<<"Following are the marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"Following are the mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    mathmarks[2]=455;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl; 
    }

      //  POINTERS AND ARRAYS
    int*p=marks;
     cout<<*p++<<endl;
     cout<<*++p<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *p+1 is "<<*(p+1)<<endl;
    // cout<<"The value of *p+2 is "<<*(p+2)<<endl;
    // cout<<"The value of *p+3 is "<<*(p+3)<<endl;
    return 0;
}