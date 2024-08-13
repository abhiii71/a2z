#include <bits/stdc++.h>
using namespace std;




void mapp(){
  int n; 
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i] ;
  }

  // pre-compute 
  map<int, int> mpp;
  for(int i =0; i < n; i++){
    mpp[arr[i]]++;
  }

  int q;
  cin >> q;
  while(q--){
    int number;
    cin >> number;
    
    //fetch
    cout << mpp[number] << endl;
  }
}


int main(){

  // for integers
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // precompute 
  int hash[13] = {0};
  for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
  }

  int q;
  cin >> q;
  while(q--){
    int number;
    cin >> number;
    
    //fetch 
    cout << hash[number] << endl;
  }

  // for string 
  cout << "Hashing for string: \n";
  string s;
  cin >> s;
  //pre compute
  hash[26] = {0};
  for(int i = 0;i < s.size(); i++){
    hash[s[i]-'a']++; //character-a gives index 
  }
  cin >> q;
  while(q--){
    char c;
    cin >> c;
    //fetch
    cout << hash[c-'a'] << endl;
  }

  //MAP
  cout << "MAP: \n";
  mapp();
  
  return 0;
}
