#include <bits/stdc++.h> // this will include whatever library in there c++ (you don't neet to write iostream algorithm etc) 
using namespace std;

int main(){

  // User input and output
  cout <<"Taking input from user: \n";
  int x, y;
  cout << "Enter value of x: ";
  cin >> x;
  cout <<"Enter the value of y: ";
  cin >>y;
  cout << "The value of x and y are  " << x << " " << y << endl;

  // data types 
  //int 
  int xz = 10;
  long xx = 15;
  long long  xyz = 15000000;
  
  // float, double
  float yz = 7.1;
  double z; // stores large float values 

  // string and getline 
  string s; // abhiii71 helloabhii (only abhiii71 only print)
  cout << "Enter a string: ";
  cin >> s;
  cout << s << endl;
  
  // to print entire line code 

  string str;
  getline(cin, str); // this will read the entire line of the input 
  cout << str << endl;
  

  //char 
  char ch = 'g';
  cout << ch << endl; 

  // if else statement 
  int age;
  cout << "Enter age: ";
  cin >> age;
  if(age < 18){
    cout << "You're not an adult!\n";
  }else if(age <= 57){
    cout << "You're ready to job\n";
    if(age >= 55){
      cout <<",but retirement soon.\n";
    }
  } else {
    cout << "Retirement time.\n";
  }

  int marks;
  cout << "Enter marks: ";
  cin >> marks;
  if(marks < 25){
    cout <<"F\n";
  } else if(marks <= 44){
    cout << "E\n";
  } else if(marks <= 49){
    cout << "D\n";
  } else if(marks <= 59){
    cout << "C\n";
  } else if(marks <= 79){
    cout << "B\n";
  } else {
    cout << "A\n";
  }

  // switch  

  int day;
  cout << "Enter the day: ";
  cin >> day;

  switch(day){
    case 1:
      cout <<"Monday\n";
      break;
    case 2:
      cout <<"Tuesday\n";
      break;    
    case 3:
      cout <<"Wednesday\n";
      break;    
    case 4:
      cout <<"Thrusday\n";
      break;
    case 5:
      cout <<"Firday\n";
      break;
    case 6:
      cout <<"Saturday\n";
      break;
    case 7:
      cout <<"Sunday\n";
      break;
    default:
      cout << "Invalid\n";
      break;
  }

  // Arrays

  int arr[5];
  cout << "Enter array integers: ";
  cin >>arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; 

  cout << "4th Index Element: " << arr[4] << endl;

  // 2D array
  int arrr[3][5]; // declaring a 2D-array of 3 row and 5 columns 
  arrr[1][1] = 71;
  cout << arrr[1][1];
  cout << arrr[1][2]; // it will print garbage value because it is not define yet by user
  
  // Strings

  string val = "abhiii";
  int len = val.size();
  cout << s[len-1];
  cout << s[0]; 
  
  // for-loops
  
  return 0;
}
