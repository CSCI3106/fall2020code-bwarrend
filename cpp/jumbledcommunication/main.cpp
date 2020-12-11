#include <iostream>
#include <string>
using namespace std;

int main(){
    int refit[256];
    

    for(int i = 1; i <=255; ++i){
        int shifted = i<<1;
        int xorr = i ^ shifted;

        if(xorr > 255){
            xorr -= 256;
        }

        refit[xorr] = i;
    }

    int cases; cin >> cases;
    string printString = "";

    for(int i = 0; i < cases; ++i){
        int num; cin >> num;
        printString += to_string(refit[num]) + " ";
    }

    printString.pop_back();
    cout << printString << endl;
    

    return 0;
}