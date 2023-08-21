// OOPS RECAP AND NESTING 0F MEMBER FUNCTION IN C++

// OOPs -classes and objects

//   c++  -->inntially called  -->c with classes by stroustroup
// class  --> extensions of structures (in C)
// structures had limitations
//         -->members are public
//        -->>no  methods
//  classes=structures+more
// classes --> can have methods and properties
// classes  -->  can make few members as private and public
//  structures in c++ are typedef
//   you can declare objects along with thr class declaration
/*      class Employee {
           //class defination
             } harry,rohan,akhil ;*/

//  harry.salary=8 makes no sense if salary is private

// NESTING OF MEMBERS IN C++

#include <iostream>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter the binary number :" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i<s.length() ; i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
        
    }
}
 void binary::ones_compliment(void){
    for (int i = 0; i < s.length() ; i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
 }

 void binary::display(void){
    cout<<"Display the binary number"<<endl;
    for (int i = 0; i < s.length(); i++){

        cout<<s.at(i);
    }
    
 }
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}