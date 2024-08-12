#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

// No base condition (no exit)
void again(){
  cout << cnt <<" ";
  cnt++;
  again();
}

void again2(){
  if (cnt == 3)
    return;
  cout << cnt << " ";
  cnt++;
  again2();
}

//Print name 5 times 
void printName(int i,int n){
  if(i > n)
    return;
  cout << "abhiii71 " << i << endl;
  printName(i+1,n);
}

// Print 1 to  N using backtracking
void printN(int i, int n){
  if(i < 1){
    return;
  }
  printN(i-1,n);
      cout << i;
}

// Print N to 1 using backtracking
void printRev(int i, int n){
  if(i > n)
    return;
  printRev(i+1, n);
  cout << i;  
}

// Functional Recursion 
int sumRecursion(int n){
  if(n == 0){ 
    return 0;
  }
  return n+sumRecursion(n-1);
}

// factorial 
int factorial(int n){
  if(n == 1) return 1;
  return n*factorial(n-1);
}

//reverse an array using recursion
// using two pointers
void revArray(int arr[], int left, int right){
  if (left >= right) return;
  swap(arr[left], arr[right]);
  revArray(arr, left+1, right-1);
}

// using single pointer 
void revArray2(int i, int arr[], int n){
  if(i >= n/2) return ;
  swap(arr[i], arr[n-i-1]);
  revArray2(i+1, arr, n);
}

// check if a string is palindrome
bool checkPalindrome(string &str, int i){
  if(i >= str.size()/2) return true;
  if (str[i] != str[str.size()-i-1]) return false;
  return checkPalindrome(str, i+1);
}

// fibonacci number
int fib(int n){
  if(n <= 1) return n;
  int last = fib(n-1);
  int slast = fib(n-2);
  return last + slast;
}

int main(){

  again2();
  cout << endl;

  // Print name 5 times;
  int n = 5;
  int i = 1;
  printName(i, n);
  
  n = 3;    
  printN(n,n);
  cout << endl;
  
 
  i = 1;
  n = 3;
  printRev(i, n);
      

  // Functional recursion
  n = 3;
  cout <<endl<< sumRecursion(3);
  n = 4;
  cout << endl <<"Factorial of  "<< n << " : " << factorial(4) << endl;

  // reverse array using recursion:

  // using two pointer
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  revArray(arr, 0, n-1);
  for(int i = 0; i < n; i++) cout << arr[i] << " "; 
  cout << endl;

  // using single pointer
  cin >> n;
  int arr2[n];
  for(int i = 0; i < n; i++) cin >> arr2[i];
  revArray2(0, arr2, n);
  for(int i = 0; i < n; i++) cout << arr2[i] << " ";

  // check if a string is palindrome 
  string str = "MADAM";
  cout << checkPalindrome(str, 0) << endl;

  cout << fib(4);

  cout << endl;
}


