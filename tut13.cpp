    //    STRUCTURES AND UNIONS AND ENUM IN C++

#include<iostream>
using namespace std;

int main(){
                    //  Structure
//     // WE CAN USE TYPEDEF FORINSTEAD OF WRITING STUCT EMPLOYEE
//          struct employee  
//     {
//         int eid;
//         float salary;
//         char favchar;
//     } ;
//   struct employee Akhil;
//  struct employee Vivek;
//   struct employee Uttam;

// Akhil.eid=1234;
// Akhil.salary=3000000;
// Akhil.favchar='p';

// Uttam.eid=1234;
// Uttam.salary=3000000;
// Uttam.favchar='m';

// Vivek.eid=1234;

// Vivek.salary=3000000;
// Vivek.favchar='r';

// cout<<"The value is "<<Akhil.eid<<endl; 
// cout<<"The value is "<<Akhil.salary<<endl; 
// cout<<"The value is "<<Akhil.favchar<<endl; 

// cout<<"The value is "<<Uttam.eid<<endl; 
// cout<<"The value is "<<Uttam.salary<<endl; 
// cout<<"The value is "<<Uttam.favchar<<endl;

// cout<<"The value is "<<Vivek.eid<<endl; 
// cout<<"The value is "<<Vivek.salary<<endl; 
// cout<<"The value is "<<Vivek.favchar<<endl; 

                        // UNION
    //  union money
    //  {
    //     int car;
    //     int rice;
    //     float money;
    //  };
    //   union money m1;
    //   m1.rice=44;
    //   m1.car=3;
    //   cout<<m1.car<<endl;          


            //    ENUM
            enum Meal{Breakfast,Lunch,Dinner};
            Meal m1=Breakfast;
            cout<<m1;
            // cout<<Breakfast;
            // cout<<Lunch;
            // cout<<Dinner;        
    return 0;
}