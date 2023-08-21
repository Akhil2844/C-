        //    C++ CONTOL STUCTURES , IF ELSE&SWITCH CASE
        #include<iostream>
        using namespace std;
        int main(){

                         // Selection control structure:if else
            // int age;
            // cout<<"Tell me your age"<<endl;
            // cin>>age;
            // if((age<18)&&(age>0)){
            //     cout<<"You ar not yet come to the party";
            // }
            // else if (age==18)
            // {
            //     cout<<"You are a kid and you need a kid pass to enter the party";
            // }
            // else if (age<1){
            //       cout<<"You are not born";
            // }
            // else {
            //     cout<<"You can come to the party";
            // }
            

                        //   Switch Statement
            int age;
            cout<<"Tell me your age"<<endl;
            cin>>age;
            switch (age) 
            {
            case 18:
            cout<<"You are 18"<<endl;
                // break;
            
             case 22:
            cout<<"You are 22"<<endl;
                // break;

                 case 2:
            cout<<"You are 2"<<endl;
                // break;

            default:
            cout<<"No special cases";
                 break;
            }            
            return 0;
        }