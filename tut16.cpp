                                       //***** INLINE FUNCTIONS ,DEFAULT ARGUMENTS & CONSTANT ARGUMENTS*****

        #include<iostream>
        using namespace std;

     //********INLINE FUNCTIONS*********

    //    inline int  product( int a,int b){
    //        return a*b;
          
    //     }

                          //*****STATIC FUNCTIONS**********
        int  product( int a,int b){  //we cannot use inline function with static functions
          static int c=0;       //This excute only once
          c=c+1;                //Next time the value of c is run ,the value of c will retained
           return a*b+c;
          
        }

        float moneyReceived(int currentMoney, float factor=1.08){
              return currentMoney*factor;
        }


               //********CONSTANT ARGUMENTS*************
        //int strlen(const char *p)


        int main(){
        //  int a,b;
        //  cout<<"Enter the value of a and b"<<endl;
        //  cin>>a>>b;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;


            int money=100000;
         cout<<"If you have "<<money<<" Rs in your Bank Account,you will recive "<<moneyReceived(money)<<" Rs after 1year"<<endl;
         cout<<" For VIP : If you have "<<money<<" Rs in your Bank Account,you will recive "<<moneyReceived(money,1.1)<<" Rs after 1year";
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
        //  cout<<"The product  of a and b is "<<product(a,b)<<endl;
            return 0;
        }






// DEFAULT ARGUMENTS KO BAD M LIKHNA H














