#include <iostream>
using namespace std;

// Bubble Sort: 
void selection_sort(int arr[], int n){
  for(int i = 0; i < n-2; i++){
    int min = i;
    for(int j = i ; j <= n-1; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

// Bubble Sort:
void bubble_sort(int arr[], int n){
  for(int i = n-1; i >= 0; i--){
    int didSwap = 0; // if array is already sorted
    for(int j = 0; j <= i; j++){
      if(arr[j]> arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        didSwap = 1;
      }
    }
    // if arr is already sorted it break
    if(didSwap == 0){
      break;
    }
  }
}

// Insertion Sort: 
void insertion_sort(int arr[], int n){
  for(int i = 0; i <= n-1; i++){
    int j = i;
    while(j > 0 && arr[j-1]>arr[j]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
  }
}

int main(){ 
  int n;
  cout << " Enter n: ";
  cin >> n;
  int arr[n];
  cout << endl;

  cout << "Enter array elements: ";
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << "Array elements: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  // Selection Sort: 
  selection_sort(arr, n);
  cout << "Array elements after selection sort: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;


  //Bubble Sort: 
  int arr1[5] = {89, 23, 13, 21, 67}; 
  bubble_sort(arr1, 5);
  cout << "Array elements after selection sort: ";
  for(int i = 0; i < n; i++){
    cout << arr1[i] << " ";
  }
  cout << endl;


  // Insertion Sort: 
  int arr2[5] = {89, 23, 0, 13, 69}; 
  insertion_sort(arr2, 5);
  cout << "Array elements after insertion sort: ";
  for(int i = 0; i < n; i++){
    cout << arr2[i] << " ";
  }
  cout << endl;



  return 0;
}

