#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int inn; cin >> inn;

    if(floor(log2(inn)) == log2(inn) || inn == 1){
        cout << inn << " " << 0 << endl;
        exit(0);
    }

    int minimumSize = 1;

    while(minimumSize <= inn) minimumSize *= 2;

    cout << minimumSize << " ";
    int breaks = 0, breaking = 0;
    
    while(breaking < inn){
        minimumSize /= 2;

        if(breaking + minimumSize <= inn) breaking += minimumSize;
        breaks++;
    }
    cout << breaks << endl;

    return 0;
}
