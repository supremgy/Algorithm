#include <bits/stdc++.h>
using namespace std;
int M,N, a[15000],cnt;

int main() {
 cin >> M >>N;
 for(int i =0;i<M;i++){
     cin >> a[i];
 }
 int cnt = 0;
 for(int i=0;i<M-1;i++){
     for(int j=i+1;j<M;j++){
         if(a[i]+a[j] ==N) cnt++;
     }
 }
 cout << cnt << "\n";
    return 0;
}