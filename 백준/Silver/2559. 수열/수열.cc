#include <bits/stdc++.h>
using namespace std;

int n,k,tmp, psum[1000001],ret = -10000004;
int main() {
cin >> n >> k;
for(int i =1; i<=n;i++){
    cin >> tmp;
    psum[i] = psum[i-1] + tmp;
}

for(int i = k;i<=n;i++){
    ret = max(ret, psum[i] - psum[i-k]);
}
cout << ret << "\n";
    
    return 0;
}