#include<iostream>
using namespace std;

void swapAlt(int arr[], int n ){

    for(int i=0;i<n;i = (i+2)){

        if (i+1<n)
        {
            swap(arr[i], arr[i+1]);
        }
        

        
    }
   
}

int main(){


    int arr[5] = {3,5,7,8,9};

    swapAlt(arr, 5);

    for(int i=0;i<5;i++){

         cout<<arr[i]<<" ";
    }



    return 0;
}