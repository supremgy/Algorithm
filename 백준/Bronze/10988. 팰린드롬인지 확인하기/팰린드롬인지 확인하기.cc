#include <bits/stdc++.h>
using namespace std;
string str;
int main(){
cin >> str;
  string reversedStr(str.rbegin(),str.rend());
  if(str == reversedStr){
    cout << 1 << "\n";
  }else{
          cout << 0 << "\n";
  }

    return 0;
}