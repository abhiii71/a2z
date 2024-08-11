#include <iostream>
#include <cmath>
using namespace std;

void extractingDigit(int n){
  while(n>0){
    int N = n%10;
    cout << N << endl;
    n = n/10;
  }
}

// Given a two-digit +ve integer n, find sum of its digit.
unsigned int sum(unsigned int num){
  int num1 = num %10;
  int num2 = num/10;
  return num1+num2;
}

// given number 'N' find out number of digits present in a number. 
int count(){
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  int count = 0;
  while(n > 0){
    int num = n%10;
    count += 1;
    n = n/10;
  }
  return count;
}

// Reverse the number 
int reverse(int num){
  int reverse = 0;
  while(num > 0){
    int lastdigit = num%10;
    num = num/10;
    reverse = (reverse*10)+ lastdigit;
  }
  return reverse;
}

//Print Armstrong number
bool armstrong(int num){
  int num1 = num;
  
  int sum = 0;
  while(num != 0){

    int lastDigit = num%10;
    sum += pow(lastDigit,3); 
    num = num/10;
  }
  return (sum == num1);
}

// Print all divisions 
void division(int n){
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      cout << i << " ";
    }
  }
  cout << endl;
}

// Check prime
bool isPrime(int num){
  for(int i = 2; i < num; i++){
    if (num % i == 0){
      return false;
    }
  }
  return true;
}
// gcd 
int gcd(int a, int b){
  int gcd = 0;
  while(a > 0 && b > 0){
    if(a > b){
      a = a%b;
    } else {
      b = b%a;
    }
    if(a == 0){  
      gcd = b;
    } else {
      gcd = a;
    }
  }
  return gcd;
}
int main(){
  int n = 7789;
  extractingDigit(n);

  // codeforces 1999 first problem
 unsigned int num;
  cout << "Enter 2 digit +Ve number: ";
  cin  >> num ;
  cout << "\nSum of two +ve integer: " << sum(num) << endl;

  //count 
  cout << "Number of digits present in the number\n";
  cout<< count() << endl;

  // reverse 
  int num1 = 7789;
  cout << "Reversed Number: "<< reverse(num1) << endl; 

  // armstrong check
 
  if (armstrong(35)) {
    cout << "No. is armstrong\n";
  } else {
    cout << "Number is not armstrong\n";
  }

  // divisions
  division(36);

  // check prime 
  if(isPrime(11)){
    cout << "Number is Prime.";
  } else {
    cout << "Number is not an prime number.";
  }
  
  // gcd
  cout << endl;
  cout << gcd(30, 40);
  cout << endl;
  return 0;
}
