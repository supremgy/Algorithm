#include <bits/stdc++.h>
using namespace std;

int a, b, c,ret;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> a >> b>>c;
    ret = (a+b)%c;
    cout << ret << "\n";
    ret =((a%c)+(b%c))%c;
    cout << ret << "\n";
    ret = (a*b)%c;
    cout << ret << "\n";
    ret = ((a%c)*(b%c))%c ;
    cout << ret << "\n";
 return 0;
}