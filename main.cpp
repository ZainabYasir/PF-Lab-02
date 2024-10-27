#include<iostream>
using namespace std;
int main(){
float ini_balance,dep_amount,withdr_amount;
cout<<"Enter the initial balance:";
cin>>ini_balance;
cout<<"Enter the deposit amount:";
cin>>dep_amount;
cout<<"Enter the withdrawal amount:";
cin>>withdr_amount;
ini_balance+=dep_amount;
cout<<"Balance after deposit:"<<ini_balance<<endl;
ini_balance-=withdr_amount;
cout<<"Balance after withdrawal:"<<ini_balance<<endl;
return 0;
}