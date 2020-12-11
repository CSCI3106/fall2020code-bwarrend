#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main(){
    ios::sync_with_stdio(false);
    string wholeInput; cin >> wholeInput;
    int numerator = stoi(wholeInput.substr(0, wholeInput.find("/")));
    int denominator = stoi(wholeInput.substr(wholeInput.find("/") + 1, wholeInput.length()-1));

    int added = 32 * denominator;
    
    numerator -= added;

    numerator *= 5;
    denominator *= 9;
    

    int GCD = gcd(numerator, denominator);
    
    numerator /= GCD;
    denominator /= GCD;

    if (denominator < 0){
        denominator *= -1;
        numerator *= -1;
    }


    cout << numerator << "/" << denominator << endl;

    
    return 0;
}