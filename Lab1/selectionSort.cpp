#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){
for(int i=0; i < n-1; i++) {
    int min_ele = i;
for(int j= i; j < n; j++) {
if(arr[j] < arr[min_ele]){
    min_ele = j;
}
}
int temp = arr[min_ele];
arr[i] = arr[min_ele];
arr[i]= temp;

}
}
int main(){
int n;

cout<<"Enter the number of elements: ";
cin >> n;
int arr[n];
cout<< "Enter the elements:";
for(int i=0; i<n; i++){
cin>> arr[i];
}


selectionSort(arr, n);

cout<<"Sorted Array: ";
for(int i=0; i < n; i++){
    cout << arr[i] << " ";
}


return 0;
}