#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    
    int wholeNumber, remains, a, b; 

    while (cin >> a >> b){
        wholeNumber = 0;
        remains = 0;

        if (b == 0) break;

        wholeNumber = a / b;
        remains = a - (b*wholeNumber);

        cout << wholeNumber << " " << remains << " / " << b << endl;
    }

    return 0;
}