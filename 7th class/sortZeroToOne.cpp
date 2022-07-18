#include<iostream>
using namespace std;

void sortZeroToOne(int arr[], int n ){

    int zero = 0;
    int one = 0;
    int two = 0;

    for(int i=0;i<n;i++){

        if (arr[i] == 0)
        {
            zero++;
        }else if (arr[i] == 1)
        {
           one++; 
        }else
        {
            two++;
        }
        
    }

    int i = 0;

    //put zero
    while(zero--){
        arr[i] = 0;
        i++;
    }

    //put one
    while(one--){
        arr[i] = 1;
        i++;
    }

    //put two
    while(two--){
        arr[i] = 2;
        i++;
    }
   
}

int main(){


    int arr[] = {2,1,0,1,0,2};

    sortZeroToOne(arr, 6);

    for(int i=0;i<6;i++){

         cout<<arr[i]<<" ";
    }



    return 0;
}