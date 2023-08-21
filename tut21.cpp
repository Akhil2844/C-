        //    MEMORY ALLOCATION AND USING ARRAYS IN CLASSES

#include<iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
    
        void initcounter(void)
        {
            counter=0;
        }
        void setprice(void);
        void displayprice(void);
    
};
void shop :: setprice (void){
cout<<"Enter Id of your item no: "<<endl;
cin>>itemID[counter];
cout<<"Enter the Price of youe item:"<<endl;
cin>> itemPrice[counter];
counter ++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of Item with Id "<<itemID[i]<<" is "<<itemPrice[i]<<endl;

    }
    
}
int main(){
    shop dukkan;
    dukkan.initcounter();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.displayprice();
    return 0;
}