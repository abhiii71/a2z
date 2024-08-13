#include <iostream>
using namespace std;

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

  selection_sort(arr, n);
  cout << "Array elements after selection sort: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

