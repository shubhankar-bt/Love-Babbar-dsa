#include<iostream>
using namespace std;

bool checkPalindrome(int arr[], int n ){

        int i = 0;
        int j = n-1;
        while(i<j) {
            if(arr[i]==arr[j]){
                i++;
                j--;
            }else{
                cout<<"Plaindrome no ";
                return false;
            }
        }
        
        return true;
        cout<<"Plaindrome yes ";
   
}

int main(){


    int arr[] = {3,5,7,8,9};

    checkPalindrome(arr, 5);

    // for(int i=0;i<5;i++){

    //      cout<<arr[i]<<" ";
    // }



    return 0;
}