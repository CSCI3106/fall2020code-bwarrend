#include <iostream>

using namespace std;


int main(){

    int dataSets = 0;
    cin >> dataSets;

    for(int i = 0; i < dataSets; ++i){
        int a, b;
        cin >> a >> b;

        int candles = 0;

        for(int j = 1; j <= b; ++j){
            candles +=  j;
        }

        candles += b;

        cout << a << " " << candles << endl;
    }
    return 0;
}