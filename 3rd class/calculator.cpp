#include<iostream>
using namespace std;

int main(){
     int a,b;
     cout<<"Enter the two numbers :"<<endl;
     cin>>a>>b;

     cout<<"which operation :"<<endl;
     char op;
     cin>>op;

  switch (op)
  {
  case '+': 
      cout<<"Result is"<<a+b<<endl;
      break;
  case '-': 
    cout<<"Result is"<<a+b<<endl;
      break;;
  case '*': 
    cout<<"Result is"<<a*b<<endl;
      break;;
 case '/': 
    cout<<"Result is :"<<a/b<<endl;
      break;;
  default: cout<<"value is default"<<endl;
      break;
  }

    

return 0;

}