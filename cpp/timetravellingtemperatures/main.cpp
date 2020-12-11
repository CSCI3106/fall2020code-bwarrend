#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    double B; double Binc; cin >> B >> Binc;
    
    if(B == 0 && Binc == 1){
        cout << "ALL GOOD" << endl;
        exit(0);
    }else if(Binc == 1){
        cout << "IMPOSSIBLE" << endl;
        exit(0);
    } 

    cout << setprecision(6) << fixed << B / (1.0 - Binc);

    return 0;
}

