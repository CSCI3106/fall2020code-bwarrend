#include <iostream>
#include <cmath>

using namespace std;



int main() {
    float x;
    cin >> x;

    
    int answer = x * (5280.0 / 4854.0) * 1000.0 + 0.5;
    cout << answer << endl;

    return 0;
}