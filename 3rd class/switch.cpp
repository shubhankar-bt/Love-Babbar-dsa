#include<iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the value of num :"<<endl;
     cin>>num;

  switch (num)
  {
  case 0: 
      cout<<"value is in 0"<<endl;
      break;
  case 5: 
      cout<<"value is in 5"<<endl;
      break;;
  default: cout<<"value is in default"<<endl;
      break;
  }

    

return 0;

}