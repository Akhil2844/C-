#include<iostream>
using namespace std;
   class complex{
    int a;
    int b;

    public:
     void setdata(int v1,int v2){
         a=v1;
         b=v2;
     }

    //  we cannot use in this program
    //   void getdatabysum(complex o1, complex o2)
    //   {
    //     a=o1.a+o2.a;
    //     b=o1.b+o2.b;
    //   }
      void printnumber(){
        cout<<"Your complex number is "<<a<<"+ "<<b<<"i"<<endl;
      }
   };
int main(){
    complex c1,c2,c3;
    c1.setdata(2,3);
    c1.printnumber();

    c2.setdata(5,6);
    c2.printnumber();

    c3.setdata(6,5);
    c3.printnumber();
        return 0;
}