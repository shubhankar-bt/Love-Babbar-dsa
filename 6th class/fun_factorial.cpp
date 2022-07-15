#include<iostream>
using namespace std;


void factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = i*fact;

    }
    cout<<"Printing Number "<<fact<<endl; 
 
}

int main(){

int num = 5;
     
    factorial(num);


    return 0;
}