#include <bits/stdc++.h>
using namespace std;
string a;
int main(){
    getline(cin,a);
     for(int i = 0;i<a.size();i++){
         if(a[i]>=65 && a[i] <=90){
             if(a[i] +13 >90) a[i] = a[i] +13 -26;
             else a[i] = a[i]+13;
         }else if(a[i]>=97 && a[i]<=122){
              if(a[i] +13 >122) a[i] = a[i] +13 -26;
             else a[i] = a[i]+13;
         }
        cout <<a[i];    
     }
     
    return 0;
}