#include<iostream>
using namespace std;

int main(){

    int n = -1357;

    while (n != 0)
    {
        int digit = n%10;
        cout<<"digit : "<<digit<<endl;
        n = n/10;
    }

    cout<<"Done"<<endl;
    

    return 0;
}