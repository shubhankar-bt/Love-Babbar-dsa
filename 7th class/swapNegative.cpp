#include<iostream>
#include<limits.h>

using namespace std;

void sortNegative(int arr[], int n ){
    
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            int j = 1;
            swap(arr[i], arr[j]);
            j++;

        }
    }
   
}

int main(){


    int arr[6] = {3,-1,-6,8,9,-2};

    sortNegative(arr, 6);

    for(int i=0;i<6;i++){

        cout<<arr[i]<<" ";
    }
    



    return 0;
}