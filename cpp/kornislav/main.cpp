#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arra[4] = {a, b, c, d};

    sort(arra, arra + 4);

    cout << arra[0] * arra[2] << endl;

    return 0;
}