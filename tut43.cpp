//   CONSTRUCTORS IN INHERITANCE
#include <iostream>
using namespace std;

/*
case (1):
class B: public A{
    ORDER OF EXECUTION OF CONSTRUCTOR   --->>  first(A) then (B)
};

 case2:
 class C : public A,public B{
     ORDER OF EXECUTION OF CONSTRUCTOR   --->>  first(A),(B) then (C)
 };

 case 3:
 class A : public B , virtual public C {
     ORDER OF EXECUTION OF CONSTRUCTOR   --->>  first(C) , (B) then (A)
 };



*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 constructor called" << endl;
    }

    void printdata1()
    {
        cout << "The value of data1 is:" << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int y)
    {
        data2 = y;
        cout << "Base2 constructor is called" << endl;
    }

    void printdata2()
    {
        cout << "The value of data2 is:" << data2 << endl;
    }
};
class Derived : public Base2, public Base1
{
    int Derived2, Derived3;

public:
    Derived(int p, int q, int r, int s) : Base1(p), Base2(q)
    {
        Derived2 = r;
        Derived3 = s;
        cout << "Derived Function is called" << endl;
    }

    void printdata(void)
    {
        cout << "The value of derived2 is" << Derived2 << endl;
        cout << "The value of derived3 is" << Derived3 << endl;
    }
};
int main()
{

    Derived Akhil(1, 2, 3, 4);
    Akhil.printdata1();
    Akhil.printdata2();
    Akhil.printdata();
    return 0;
}