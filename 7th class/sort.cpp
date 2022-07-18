#include<iostream>
#include<limits.h>
#include <algorithm>


using namespace std;

// int findMin(int arr[], int n ){
//     int ans = INT_MAX;
//     for(int i = 0; i<n; i++){
//         ans = min(ans, arr[i]);
//     }
//     return ans;





// }

int main(){


    int arr[6] = {3,5,2,8,4,6};

    sort(arr,arr+6);

    for(int i = 0; i<6; i++){

         cout<<arr[i]<<" ";
    }



    return 0;
}