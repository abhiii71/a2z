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

  cout << "After Sorting Array: " << endl; 
  for(auto it: arr){
    cout << it << " ";
  }
  cout << endl;

  return 0;
}
