#include<iostream>
using namespace std;

int main(){

    int n = 5;

    for(int row = 1; row<=n; row++){

        for(int col =1; col<= n-row; col ++){
            cout<<"  ";
        }
        for(int col =1; col <= row; col++){
            cout<<"* ";

        }
        for(int col = 2; col<= row; col++){
            cout<<"* ";
        }
        cout<<endl;

    }
    int k =5;
 
    for(int row = 2; row<=k; row++){

        for(int col =1; col<= row-1; col ++){
            cout<<"  ";
        }
        for(int col =1; col <= k-row+1; col++){
            cout<<"* ";

        }

        for (int col = 2; col <= (k-row+1) ; col++)
        {
            cout<<"* ";
        }
        cout<<endl;



       
    

    }

    
     

    return 0;
}