#include <bits/stdc++.h>
using namespace std;
string str,re;
int main(){
cin >> str;
re  = str;
reverse(re.begin(),re.end());
if(str == re) cout << 1 << "\n";
else cout << 0<<"\n";
    return 0;
}