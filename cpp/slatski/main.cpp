#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int amount, zeroes, tens; cin >> amount >> zeroes; tens = pow(10, zeroes);
    
    if(zeroes == 0);
    else{
        double toRound = round((double)amount / (double)tens);
        toRound *= tens;
        amount = (int)toRound;
    }

    cout << amount << endl;
    return 0;
}