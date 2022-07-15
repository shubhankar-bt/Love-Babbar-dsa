#include<iostream>
#include<limits.h>

using namespace std;

int findMin(int arr[], int n ){
    int ans = INT_MAX;
    for(int i = 0; i<n; i++){
        ans = min(ans, arr[i]);
    }
    return ans;





}

int main(){


    int arr[] = {3,5,7,8,9,6};

    

    cout<<"min value is : "<<findMin(arr, 6)<<endl;



    return 0;
}