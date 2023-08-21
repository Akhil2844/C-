                //    *********CONSTANTS, MANIPULATORS &OPERATOR PRECEDENCE*******
    #include<iostream>
    #include<iomanip>
    using namespace std;
    int main()
    {
        //  int a=45;
        //  cout<<"The value of a is:"<<a<<endl;
        //  a=3;
        //  cout<<"The value of a is:"<<a<<endl;

        //     // *****Constants in C++****
        // const int a=45;
        // cout<<"The value of a is:"<<a<<endl;    


                   //  *****MANIPULATORS IN C++*****
        //   int a=4,b=55,c=6777;
        //   cout<<"The value of a is:"<<a<<endl;
        //   cout<<"The value of b is:"<<b<<endl;
        //   cout<<"The value of c is:"<<c<<endl;

        //   cout<<"The value of a is:"<<setw(4)<<a<<endl;
        //   cout<<"The value of b is:"<<setw(4)<<b<<endl;
        //   cout<<"The value of c is:"<<setw(4)<<c<<endl;


                    //*****Operators precedence*****
         int a=4,b=5;
         cout<<"The answer is:"<<((a*b)+5)<<endl;           
         cout<<"The answer is:"<<((((a*b)+5)-45))<<endl;           
         return 0;
    }