#include<iostream>
#include<limits.h>

using namespace std;

int sortTwoArray(int arr[], int n ){
    int ans = INT_MIN;
    for(int i = 0; i<n; i++){
        ans = max(ans, arr[i]);
    }
    return ans;





}

int main(){

    
    int arr1[5] = {3,5,7,8,9};
    
    int arr2[4] = {5,2,6,8};

    int i =0;
    int j = 0;

    

    for(int i= 0; i <5; i ++){

    }
    

    //cout<<"max value is : "<<findMax(arr, 6)<<endl;



    return 0;
}