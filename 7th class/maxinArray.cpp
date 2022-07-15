#include<iostream>
#include<limits.h>

using namespace std;

int findMax(int arr[], int n ){
    int ans = INT_MIN;
    for(int i = 0; i<n; i++){
        ans = max(ans, arr[i]);
    }
    return ans;





}

int main(){


    int arr[] = {3,5,7,8,9,6};

    

    cout<<"max value is : "<<findMax(arr, 6)<<endl;



    return 0;
}