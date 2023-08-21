                        //   C++ REFERENCE VARIABLES AND TYPE CASTING

#include<iostream>
using namespace std;
int c=45;
int main()
{
                        // ******BUILT IN DATA TYPES******
//     int a,b,c;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     cout<<"Enter the value of b:"<<endl;
//     cin>>b;
//     c=a+b;
//     cout<<"The sum is:\n"<<c<<endl;
//     cout<<"The global c is:\n"<<::c;


            //********** FLOAT,DOUBLE AND LONG DOUBLE LITERALS********
//     float d=34.4f;
//     long double e=34.4l;
//     cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl;
//     cout<<"The size of 34.4f is"<<sizeof(34.4f)<<endl;
//     cout<<"The size of 34.4F is"<<sizeof(34.4F)<<endl;
//     cout<<"The size of 34.4l is"<<sizeof(34.4l)<<endl;
//     cout<<"The size of 34.4L is"<<sizeof(34.4L)<<endl;
//     cout<<"The value of d\n"<<d<<endl<<"The value of e\n"<<e;


                   // ******REFERENCE VARIABLE******
    //           Monty--<<Rohandas--<<dangerous coder
//     int x=45;
//     int &y=x;
//     cout<<"The value of x is:"<<x<<endl;
//     cout<<"The value of y is:"<<y<<endl;


                    // *******TYPE CASTING******
     int a=45;
     float b=45.46;
     cout<<"The value of a is:"<<a<<endl;                 
     cout<<"The value of b is:"<<b<<endl;                 
     cout<<"The value of b is:"<<int(b)<<endl;                 
     cout<<"The value of b is:"<<(int)b<<endl;


     cout<<"The value of b is:"<<a+b<<endl;
     cout<<"The value of b is:"<<a+int(b)<<endl;
     cout<<"The value of b is:"<<a+int(b)<<endl;

     
    return 0;
}