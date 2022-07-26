#include<iostream>
using namespace std;


int main(){

    //creation
    int arr[4][2];
    int n =3;

    //input

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
        
    }

    //print entire 2d matrix

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
