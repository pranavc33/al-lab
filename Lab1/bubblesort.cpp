#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0; i= n-1; i++)  {
        for(int j=0; j = n-i-1; j++) {
    if(arr[j] > arr[j+1]) {
         int temp = arr[j];
         arr[j] = arr[j+1];
         temp = arr[j+1];


     }
   }
 }
}


int main(){
int n;
cout << "Enter number of elements:\n";
cin>> n;

int arr[n];
std::cout<<"Enter the elements:\n ";
for(int i = 0 ; i < n; i++){
    std::cin>> arr[i];
}

bubbleSort(arr,n);

cout<<"Sorted Array: ";

for(int i= 0; i < n;i++){
    cout << arr[i] ;
  }

return 0;
}
