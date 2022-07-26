#include<iostream>
using namespace std;

bool checkNumber(int arr[3][4], int row, int col , int target){

     for(int i =0; i<row; i++){
        for(int j =0 ; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
        
    }

    return false;
}



int main(){

    //creation
    int arr[3][4] = { {3,5,5,7} ,{1,44,32,22}, {45,17,3,13}};
    

    int target = 13;

    cout<<"searchin 13 is : "<<checkNumber(arr, 3, 4, 13)<<endl;

    return 0;
}
