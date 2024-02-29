#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    vector<int> v;
    
    cin >> n;
    int input;
    for(int i =0;i<n;i++){
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    
    for(auto i : v){
        cout << i << " ";
    }
    return 0;
}