/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

void solve(){
    string s, t; cin >> s >> t;

    int szS = s.size();
    int szt = t.size();

    int mxS  = max(szS, szt);

    for(int i = 0; i < mxS; i++){
        if(i < szS) cout << s[i];
        if(i < szt) cout << t[i];
    }

    cout << "\n";
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything