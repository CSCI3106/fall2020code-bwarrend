#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll n, x; cin >> n >> x;




    vector<ll> items;

    for(int i = 0; i < n; ++i){
        ll current; cin >> current;
        items.push_back(current);        
    }


    sort(items.begin(), items.end(), greater<ll>());

    while(items.size() > 0){
        if(items.size() > 1){
            if(items.at(0) + items.at(1) > x){
                items.erase(items.begin());
            }else{
                cout << items.size() << endl;
                exit(0);
            }
        }else{
            cout << 1 << endl;
            exit(0);
        }
    }


    return 0;
}