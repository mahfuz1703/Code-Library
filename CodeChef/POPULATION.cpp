#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    for(int i = 0; i < t; i++){
        int x,y,z;
        cin>>x>>y>>z;
        cout << x -y + z << endl;
    }
    return 0;
}
