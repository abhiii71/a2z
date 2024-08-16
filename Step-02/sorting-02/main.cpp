#include <bits/stdc++.h>
using namespace std;


// Merge Sort
void merge(vector<int> &arr ,int low, int mid, int high){
  vector<int> temp; // temporary array
  int left = low; // starting index of left half of arr  
  int right = mid+1; // starting index of right half of arr  

  // Storing elements in the temproray array in a sorted manner 
  while(left <= mid && right <= high){
    if(arr[left] <= arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  // if elements on the left half are still left
  while(left <= mid){
    temp.push_back(arr[left]);
    left++;
  }
  // if elements on the right half are still left
  while(right <= high){
    temp.push_back(arr[right]);
    right++;
  }

  // transfering all elements from temporay to arr
  for(int i = low; i <= high; i++){
    arr[i] = temp[i-low];
  }
}

void mergeSort(vector<int> &arr, int low, int high){
  if(low == high) return;
  int mid = (low+high)/2;
  mergeSort(arr,low, mid); // left half 
  mergeSort(arr, mid+1, high); // right half
  merge(arr, low, mid, high); // merging sorted halves
  
}

// Quick Sort
int partition(vector<int> &arr, int low, int high){
  int pivot = arr[low];
  int i = low;
  int j = high;
  while(i < j){
    while(arr[i] <= pivot && i <= high-1){
      i++;
    }
    while(arr[j] > pivot && j >= low+1){
      j--;
    }
    if(i < j) swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void qs(vector<int> &arr, int low, int high){
  if(low < high){
    int pIndex = partition(arr, low, high);
    qs(arr, low, pIndex-1);
    qs(arr, pIndex+1, high);
  }
}

vector<int> quickSort(vector<int> arr){
  qs(arr, 0, arr.size()-1);
  return arr;
}


int main(){

  // Merge Sort

  vector<int> arr = {23, 45,23,67,57,21,71, 69};
  int n = arr.size();
  
  cout << "Before Sorting Array: " << endl;
    for (auto it: arr){
        cout << it << " "  ;
  }
  cout << endl;

  mergeSort(arr, 0, n-1);

  cout << "Array after MergeSort: " << endl; 
  for(auto it: arr){
    cout << it << " ";
  }
  cout << endl;

  // Quick Sort:
  vector<int> arr1 = {43,5,32,69,222,71,69,7};
  n = arr1.size();
  cout << "Before Sorting Array: " << endl;
  for (auto it: arr1){
        cout << it << " "  ;
  }
  cout << endl;

  arr =quickSort(arr1);
  cout << "Array after QuickSort: " << endl; 
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  
  return 0;
}
