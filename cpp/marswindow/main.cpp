#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int year; cin >> year;    
    year = (year % 13) + 1;    
    if(year == 12) year == 0;    
    if(year % 2 == 0 && year != 0) cout << "yes" << endl;
    else cout << "no" << endl;
    
    return 0;
}