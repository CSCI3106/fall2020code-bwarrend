#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll N = -1;
    ll M = -1; 

    while(M != 0 && N != 0){
        cin >> N >> M;
        if(N == 0 || M == 0) exit(0);

        bool *both = new bool[1000000000];

        for(ll i = 0; i < N + M; ++i) both[i] = false;
        
        ll count = 0;
        for(ll i = 0; i < N + M; ++i){
            ll n; cin >> n;
            if(both[n]) count++;
            else both[n] = true;         
        }

        cout << count << endl;
    }
    return 0;
}