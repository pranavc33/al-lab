#include<iostream>
using namespace std;


int binarySearch(int arr[], int low, int high, int x){

    while(high >= low){
            int mid = (high+low)/2 ;


    if (arr[mid] > x ){


        binarySearch( arr, low, mid -1 , x);
    }

    else {
        binarySearch(arr, mid+1, high, x);
    }
    return -1;
    }

}


int main() {

int arr[] = {10,20,30,40,50,60};
int x =  30;
int n= sizeof(arr)/sizeof(arr[0]);
int result =  binarySearch(arr, 0, n-1,x);
(result == -1) ? std::cout << "Element is present at index " << result :
std::cout << "Element is not present in the array";
    return 0;
}

