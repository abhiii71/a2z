#include <bits/stdc++.h>
using namespace std;

void pattern1(){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern2(){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j <= i; j++){
      cout << "*";
    }
    cout <<"\n";
  }
}

void pattern3(){
  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
      cout << j;
    }
    cout <<"\n";
  }
}

void pattern4(){
  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
      cout << i; 
    }
    cout << "\n";
  }
}

void pattern5(){
  for(int i = 1; i <= 5; i++){
    for(int j = 5; j >= i; j--){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern6(){
  for(int i = 5; i >= 1; i--){
    for(int j = 1; j <=i; j++){
      cout << j;
    }
    cout << endl;
  }
}

void pattern7(){
  for(int i = 0; i < 5; i++){ 
    for(int j = 0; j < 5-i-1; j++){
          cout << " ";
    }
    for(int j = 0; j < 2*i+1;j++){
      cout << "*";
    }
    for(int j = 0; j < 5-i-1; j++){
      cout << " ";
    }
    cout << endl;
  }
}

void pattern8(){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < i; j++){
      cout <<" ";
    }
    for(int j = 0; j < 2*5-(2*i+1); j++){
      cout <<"*";
    }
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    cout << endl;
  }
}

void pattern9(){
  for(int i = 0; i < 5;i++){
    for(int j = 0; j <5-i-1; j++){
      cout << " ";
    }
    for(int j = 0; j < 2*i+1;j++){
      cout <<"*";
    }
    for(int j = 0; j < 5-i-1; j++){
      cout <<" ";
    }
    cout << endl;
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    for(int j = 0; j < 2*5-(2*i+1); j++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern10(){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j <=i; j++){
      cout << "*";
    }
    cout << endl;

  }
  for(int i = 0; i < 5; i++){
    for(int j = 5; j > i; j--){
      cout << "*";
    }
    cout <<endl;
  }
}

void pattern11(){
  int start = 1;
  for(int i = 0; i < 5; i++){
    if(i%2 == 0) start = 1;
    else start = 0; 
    for(int j = 0; j <=i; j++){
      cout << start;
      start = 1-start;
    }
    cout << endl;
  }
}

void pattern12(){
  int spaces = 2*(4-1);
  for(int i = 1; i < 5; i++){
    for(int j = 1; j <= i; j++){
      cout << j;
    }
    for(int j = 1; j <= spaces; j++){
      cout << " ";
    }
    for(int j = i; j >= 1; j--){
      cout << j;
    }
    cout << endl;
    spaces -= 2;
  }
}

void pattern13(){
  int count = 1;
  for(int i = 1; i <=5; i++){
    for(int j = 1; j <= i; j++){
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}

void pattern14(){
  for(int i = 0; i < 5; i++){
    for(char ch = 'A'; ch <= 'A'+ i; ch++){
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pattern15(){
  for(int i = 0; i < 5; i++){
    for(char  ch = 'A'; ch <= 'A'+(5-i-1); ch++){
      cout << ch << " "; 
    }
  cout << endl;
  }
}

void pattern16(){
  for(int i = 0; i < 5; i++){
    char ch = 'A'+ i;
    for(int j = 0; j <5-i-1; j++){
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pattern17(){
  for(int i = 1; i < 5; i++){
    for(int j = 0; j < 5-i-1; j++){
      cout << " ";
    }
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int j = 0; j <= 2*i-1; j++){
      cout << ch;
      if(j <= breakpoint) ch++;
      else ch--;
    }
    for(int j = 0; j < 5-i-1;j++){
      cout << " ";
    }
    cout << endl;
  }
}

void pattern18(){
  for(int i = 0; i < 5; i++){
    for(char ch = 'E' - i;ch <= 'E'; ch++){
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pattern19(){
  int iniS = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 1; j <= 5-i; j++){
      cout <<"*";
    }
    for(int j = 0; j < iniS; j++){
      cout << " ";
    }
    for(int j = 1; j <= 5-i; j++){
      cout<< "*"; 
    }
    iniS += 2;
    cout << endl;
  }
  iniS = 2*5-2;
  for(int i = 1; i <=5; i++){
    for(int j = 1; j <= i; j++){
      cout << "*";
    }
    for(int j = 0; j < iniS; j++){
      cout << " ";
    }
    for(int j = 0; j <= i; j++){
      cout << "*";
    }
    iniS  -= 2;
    cout << endl;
  }
}

void pattern20(){
  int spaces = 2*5-2;
  for(int i = 1; i <= 2*5-1; i++){
    int stars = i;
    if(i > 5) stars = 2*5-i;
    for (int j = 1; j <= stars; j++){
      cout <<"*"; 
    }
    for(int j = 1;j < spaces; j++){
      cout << " ";
    }

    for(int j = 1; j <= stars; j++){
      cout <<"*";
    }
    cout << endl;
  
    if(i < 5) spaces -= 2;
    else spaces += 2;
  }
}

void pattern21(){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if( i == 0 || j == 0 || i == 5-1 || j == 5-1 ){
        cout << "*";
      } else cout << " ";
      
    }
    cout << endl;
  }
}

void pattern22(){
  for(int i = 0; i <2*4-1; i++){
    for(int j = 0; j < 2*4-1; j++){
      int top = i;
      int left = j;
      int right = (2*4-2)-j;
      int down = (2*4-2)-i;
      cout <<(4-min(min(top, down), min(left, right)));
    }
    cout << endl;
  }
}

int main(){

  pattern1();
  pattern2();
  pattern3();
  pattern4();
  pattern5();
  pattern6();
  pattern7();
  pattern8();
  pattern9();
  pattern10();
  pattern11();
  pattern12();
  pattern13();
  pattern14();
  cout << "Pattern 15:\n";
  pattern15();
  pattern16();
  pattern17(); // i  think something is wrong with pattern 17 
  pattern18();
  pattern19();
  pattern20();

  pattern21();
  pattern22();
}
