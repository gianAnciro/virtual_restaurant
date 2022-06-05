#include<iostream>
#include<conio.h>
using namespace std;

float balance=0;
string food[5]={"pansit","pansit&egg","lugaw","lugaw&egg","lumpia"};
string purchase[5];
float price[5]={15,20,15,20,10};


void displayHome();
void displayInstructions();
void displayMenu();
void displayDeposit();
void displayDeposit1();
void displayBalance();
void displayInventory();
void displayDeveloper();

int main(){

displayHome();

return 0;
}
//home
void displayHome(){
clrscr();
cout<<"welcome to my virtual restaurant\n\n";
cout<<"(1.)instructions\n";
cout<<"(2.)menu\n";
cout<<"(3.)deposit\n";
cout<<"(4.)balance\n";
cout<<"(5.)inventory\n";
cout<<"(6.)developer\n";

char pick;
cin>>pick;
switch(pick){
case '1': displayInstructions(); break;
case '2': displayMenu(); break;
case '3': displayDeposit(); break;
case '4': displayBalance(); break;
case '5': displayInventory(); break;
case '6': displayDeveloper(); break;
default:  main(); break;
}
}
//instructions
void displayInstructions(){
clrscr();
cout<<"instructions\n\n";
cout<<"*this is a virtual restaurant\n";
cout<<"*in order to purchase you should have a balance\n";
cout<<"*one purchase at a time\n";
cout<<"*add money using the deposit option\n";
cout<<"*see the menu to look at the list of foods available\n";
cout<<"*you can see and take purchases in inventory\n";
cout<<"*you can only store 5 orders until withdraw\n";

char backToHome;
cout<<"\nenter any key to go back: ";
cin>>backToHome;
switch(backToHome){
default: main(); break;
}
}
//menu
void displayMenu(){
clrscr();
cout<<"menu\n\n";
cout<<"balance "<<balance<<endl;
cout<<"(1.)pansit=15\n";
cout<<"(2.)pansit&egg=20\n";
cout<<"(3.)lugaw=15\n";
cout<<"(4.)lugaw&egg=20\n";
cout<<"(5.)lumpia=10\n\n";



cout<<"pick your order: ";
char order;
cin>>order;
if(balance<=0)
displayDeposit1();

else if(balance<=price[0] && order=='1'){
cout<<"unable to complete purchase\n";
cout<<"insufficient balance\n";
}
else if(order=='1'){
balance=balance-price[0];
purchase[1]=food[0];
cout<<"you bought pansit\n";
cout<<"pansit succesfully added to your inventory\n";
}
else if(balance<=price[1] && order=='2'){
cout<<"unable to complete purchase\n";
cout<<"insufficient balance\n";
}
else if(order=='2'){
balance=balance-price[1];
purchase[2]=food[1];
cout<<"you bought pansit&egg\n";
cout<<"pansit&egg succesfully added to your inventory\n";
}
else if(balance<=price[2] && order=='3'){
cout<<"unable to complete purchase\n";
cout<<"insufficient balance\n";
}
else if(order=='3'){
balance=balance-price[2];
purchase[3]=food[2];
cout<<"you bought lugaw\n";
cout<<"lugaw succesfully added to your inventory\n";
}
else if(balance<=price[3] && order=='4'){
cout<<"unable to complete purchase\n";
cout<<"insufficient balance\n";
}
else if(order=='4'){
balance=balance-price[3];
purchase[4]=food[3];
cout<<"you bought lugaw&egg\n";
cout<<"lugaw&egg succesfully added to your inventory\n";
}
else if(balance<=price[4] && order=='5'){
cout<<"unable to complete purchase\n";
cout<<"insufficient balance\n";
}
else if(order=='5'){
balance=balance-price[4];
purchase[5]=food[4];
cout<<"you bought lumpia\n";
cout<<"lumpia succesfully added to your inventory\n";
}

char backToHome;
cout<<"\nenter any key to go back: ";
cin>>backToHome;
switch(backToHome){
default: main(); break;
}
}
//deposit
void displayDeposit(){
clrscr();
cout<<"how much you want to deposit: ";
float deposit;
cin>>deposit;
balance=balance+deposit;
cout<<"succesfully added "<<deposit<<" to your account\n";

char backToHome;
cout<<"\nenter any key to go back: ";
cin>>backToHome;
switch(backToHome){
default: main(); break;
}
}
//deposit1
void displayDeposit1(){
clrscr();
cout<<"insufficient balance\n";
cout<<"how much you want to deposit: ";
float deposit;
cin>>deposit;
balance=balance+deposit;
cout<<"succesfully added "<<deposit<<" to your account\n";

char backToHome;
cout<<"\nenter any key to resume purchase ";
cin>>backToHome;
switch(backToHome){
default: displayMenu(); break;
}
}
//balance
void displayBalance(){
clrscr();
cout<<"you currently have "<<balance<<" in your account";

char backToHome;
cout<<"\nenter any key to go back: ";
cin>>backToHome;
switch(backToHome){
default: main(); break;
}
}
//inventory
void displayInventory(){
clrscr();
cout<<"you purchased these: "<<purchase[1]<<", "<<purchase[2]<<", "<<purchase[3]<<", "<<purchase[4]<<", "<<purchase[5];
cout<<"\nremaining balance "<<balance;


char take;
cout<<"\ndo you want to take all your items and remaining balance?\n";
cout<< "\nenter y to confirm any key to cancel ";
cin>>take;
switch(take){
case 'y': balance=0; purchase[1]=" "; purchase[2]=" "; purchase[3]=" "; purchase[4]=" "; purchase[5]=" ";
cout<<"\nwithdraw succesful"; break;
default: main(); break;
}

char backToHome;
cout<<"\nenter any key to go back: ";
cin>>backToHome;
switch(backToHome){
default: main(); break;
}
}

//developer
void displayDeveloper(){
clrscr();
cout<<"credits\n\n";
cout<<"*created by gianAnciro\n";
cout<<"*assignment in computer programming 2\n";

char backToHome;
cout<<"\nenter any key to go back: ";
cin>>backToHome;
switch(backToHome){
default: main(); break;
}
}
