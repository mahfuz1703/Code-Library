#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool found = true;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            cout << "HARD\n";
            found = false;
            break;
        }
    }
    if(found){
        cout << "EASY\n";
    }
    return 0;
}