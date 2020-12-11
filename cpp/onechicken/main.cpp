#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int ppl, chicken; cin >> ppl >> chicken;

    if(ppl > chicken){
        if(ppl - chicken == 1){
            cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        }else{
        cout << "Dr. Chaz needs " << ppl - chicken << " more pieces of chicken!" << endl;
        }

    }else{
        if(chicken - ppl == 1){
            cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
        }else{
        cout << "Dr. Chaz will have " << chicken - ppl << " pieces of chicken left over!" << endl;
        }

    }
    
    return 0;
}