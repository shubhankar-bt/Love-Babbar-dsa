#include<iostream>
using namespace std;

int main(){

    int T;
    cin>>T;

    while (T--)
    {
       int n,a,b,c,i,s=0;
       cin>>n;

       for(i=0;i<n;i++){
        cin>>c;
        if(c==1){
            a=i+1;
        }
        if(c==n){
            b=i+1;
        }

       }

       if (a>b)
       {
        s=n-b+a-2;

       }else{
        s=n-b+a-1;
       }

       cout<<s<<endl;
       
    }



    return 0;
}