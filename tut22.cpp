//    STATIC DATA MEMBERS AND METHODS IN C++

#include<iostream>
using namespace std;
  


class Employee{
    int id;
    static int count;
    // count is static data member of class employee
    public:
    void setdata(void){
        cout<<"Enter the id:"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id<<" and This is employee no "<<count<<endl;
    }
    static void getcount(void){
        cout<<"Enter the value of count :"<<count<<endl;
    }
};
  int Employee::count=1000;;    //Default value is 0
int main(){
    Employee A,B,C;
    A.setdata();
    A.getdata();
    Employee ::getcount();

    B.setdata();
    B.getdata();
 Employee:: getcount();

    C.setdata();
    C.getdata();
     Employee ::getcount();
    return 0;
}




//STATIC DIDPLAY MEMBERS

// STATIC FUNCTIONS '