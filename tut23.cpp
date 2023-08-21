//   ARRAYS OF OBJECTS AND PASSING OBJECTS AS ARGUMENTS IN C++

#include<iostream>
using namespace std;


class Employee{
    int id;
    int salary;
    public:
    void setdata(void){
        cout<<"Enter the id:"<<endl;
        cin>>id;
    }
    void getdata(){
        cout<<"The id of the employee is "<<id<<endl;
    }
};
int main(){
  Employee fb[4];
  for (int i = 0; i < 4; i++)
  {
    fb[i].setdata();
    fb[i].getdata();
  }
  
    return 0;
}