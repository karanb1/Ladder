#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,x=0;
  cin >> n;
  string str;
  for(int i=0;i<n;i++){
      cin >> str;
      for(int i=0;i<str.length();i++){
      if(str[i]== '+'){
      x++;
      break;
      }
      else if(str[i]=='-'){
      x--;
      break;
      }
      }
  }
  cout << x;
  return 0;
}
