/*
NOLLY D. DOINOG
BSCpE 2-1D
EXERCISE 2
PROFILE
*/


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string NAME1,NAME2,NAME3, B_MONTH, B_DAY, B_YEAR, address, phone, email;
    cout<<"Type your complete name here"<<endl;
    cin>>NAME1>>NAME2>>NAME3;
    cout<<endl<<"Type your birthdate MM(space)DD(space)YY."<<endl;
    cin>>B_MONTH>>B_DAY>>B_YEAR;
    cout<<endl<<"Type your address."<<endl;
    cin>>address;
    cout<<endl<<"Type your phone number."<<endl;
    cin>>phone;
    cout<<endl<<"Type your email address."<<endl;
    cin>>email;
    cout<<endl;
    cout<<"NAME:\t\t"<<NAME1<<" "<<NAME2<<" "<<NAME3<<endl;
    cout<<"BIRTHDATE:\t"<<B_MONTH<<"-"<<B_DAY<<"-"<<B_YEAR<<endl;
    cout<<"ADDRESS:\t"<<address<<endl;
    cout<<"PHONE#:\t\t"<<phone<<endl;
    cout<<"Email:\t\t"<<email<<endl;
    return 0;

}
