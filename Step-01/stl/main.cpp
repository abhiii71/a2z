#include <bits/stdc++.h>
using namespace std; 

void pairs(){
  pair<int, int> p = {1,2};
  
  // accessing 1 
  cout << p.first << endl; // 1

  // accessing 2 
  cout << p.second <<endl; //2

  // store 3 variables in pair
  pair<int, pair<int, int>> pp = {1,{3,6}};
  cout << pp.first << " " <<pp.second.second << " " << pp.second.first <<endl;

  // stores array in pairs
  pair<int, int> arr[] = {{1,2}, {3,4}, {4,6}};
  //print 6
  cout << arr[2].second << endl;
}

void vectors(){
  vector<int> v;// {}
  v.push_back(1); // {1}
  v.emplace_back(2); // {1,2} // this is faster than push back

  vector<int>v1(5,100);
//  cout <<v1[0];
  vector<int>v2(5);
  //copy one container to another
  vector<int>v71(v2);

  vector<int> v7(5,69); // {71,71,71,71,71}
  vector<int>::iterator it = v7.begin();
  cout << *(it) << " ";
  it++;
  cout << endl;
  // more iterators 
  vector<int>vec(5,71);
  for(vector<int>::iterator iit = vec.begin(); iit != vec.end(); iit++){ // vec.end() => right after last element 
    cout << *(iit) << " ";
  }
  cout << endl;

  for(auto it = vec.begin(); it != vec.end(); it++){
    cout << *(it) << " ";
  }
  cout << endl;

  // deletion 
  vector<int>arr(6,7);
  //arr.erase(arr.begin());
  arr.erase(arr.begin(), arr.begin()+5);
  for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++){
    cout <<*(it) << " ";
  }

  // Insertion
  vector<int>vect;
  vect.insert(vect.begin(), 300);
  vect.insert(vect.begin()+1,2,71);
  for(auto it = vect.begin(); it != vect.end(); it++){
    cout << *(it) << " ";
  }
  
  // copy
  vector<int>copy(2,50); // {50, 50}
  vect.insert(vect.begin(), copy.begin(), copy.end());

  cout << vect.size() << endl;
  vect.pop_back(); // remove last element 
  cout << vect.size();

  vector<int>v3(2);
  vector<int>v4(2);
  v3.insert(v3.begin(), 21);
  v3.insert(v3.begin(), 22);
  v4.insert(v4.begin(), 31);
  v4.insert(v4.begin(), 41);
  v3.swap(v4); // swap v1 with v2  
  v3.clear();
  cout << endl;
  cout << v3.empty();

  // LIST()  (same as vector but  it gives front operation as well) 
  // DEQUE()
  // STACK() // LIFO 
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(5);
  s.emplace(5);
  cout << endl;
  cout << s.top() << endl; // return last element
  s.pop();
  cout << s.size() << endl;
  stack<int>st1, st2;
  st1.swap(st2); // swapping two stacks

  // QUEUE (FIFO)

  queue<int>q;
  q.push(1); // {1}
  q.push(2); // {1, 2}

  q.back() += 5; // add 5 to the last element 
  cout << "Last element of the queue: " << q.back() << endl;

  cout << "Front element: " << q.front() << endl;
  q.pop(); // 1 is removed
  cout << q.back();  // 7
  cout << q.front(); // 7

  // PRIORITY_QUEUE(also called as max-heap) have same operations 
  priority_queue<int>ppq;
  // MIN HEAP ->
  priority_queue<int, vector<int>, greater<int>>pq;

  // SET(SOrted order & unique)
 /*
  set<int>st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  auto it = st.find(3); // return iterator 
  auto it = st.find(6); // return st.end(if element not found)
  st.erase(4);
  int cnt = st.count(1); // count ocurrence of 1 

  auto it1 = st.find(2);
  auto it2 = st.find(4);
  st.erase(it1, it2); // after erase{1,4}
  auto it3 = st.lower_bound(2);
  auto it4 = st.upper_bound(4); 

  
  // In Set all operation happens at (log N). 
  // MULTISET -> sorted but not unique 
  // UNORDERED SET -> Random but unique 
  // Time Complexity -> O(1) , worst case -> O(N)

  // MAP (Everything stored in key & value format)
  // Stored key in sorted order
  map <int, int>mpp;
  mpp[1] = 2;
  mpp.emplace({3,1}); // {3, 1} 3(key) and 1(value)
  mpp.insert({2,4});

  
  map<pair<int, int>, int> mapp;
  mapp[{2,3}] = 71;
  for(auto it : mapp){
    cout << it.first << " " << it.second << endl;
  }
  cout << mapp[1]; // 2
  cout << mapp[5]; // Null - 0
  
  //Find key's value
  auto it = mapp.find(3); // {3,1}
  cout << *(it).second; //print value

  auto it = mapp.find(5);

  // MULTIMAP(Store duplicate keys) but in sorted order 
  // UNORDERED MAP(same but not in sorted order) 
  // MAP works in log N & unordered works in O(1) 
  */

  // sort function in STL 
  // {1,5,4,3}
  // sort(a+2, a+4); 

  // sort in descending order 
  //sort(a, a+n, greater<int>) // {5,3,2,1}
  // Return max element 
  // int maxi = *max_element(a, a+n);  
}
int main(){
 // pairs();
  vectors();
}

