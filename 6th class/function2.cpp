#include<iostream>
using namespace std;

void Suresh(int m){
    cout<<"suresh Number "<<m<<endl;  
}

void rahul(int m){
    cout<<"rahul Number "<<m<<endl;  
    m++;
    Suresh(m);
}

void ramesh(int n){
    cout<<"ramesh Number "<<n<<endl;  
    n++;
    rahul(n);
}

int main(){

    int n = 21;

    ramesh(n);


    return 0;
}