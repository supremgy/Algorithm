#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, c,ret;

ll go (ll a, ll b){
    if(b==1) return a%c;
    
    ret = go(a,b/2);
    ret = (ret * ret) %c;
    if(b%2) ret = (ret*a)%c;
    return ret;
}
int main (){
    cin >> a >> b>> c;
    cout << go(a,b)<<"\n";
 return 0;
}