#include<iostream>
#include<climits>
using namespace std;

int getMaxSubArray(int arr[], int n){
    int ans = INT_MIN;
    int sum = 0;

    for(int i =0; i<n; i++){
        sum = sum+arr[i];
        ans = max(ans, sum);

        if (sum<0)
        {
           sum = 0;
           
        }
    
    }
    return ans;

}

int main(){

    int arr[] = {-2,-3,4,-1,-2,1,5,-3};

    cout<<"Max subarray sum is : "<<getMaxSubArray(arr, 8);


    return 0;
}