#include <iostream>
using namespace std;

int main(){
    int blocks; cin >> blocks;
    int lastBlock = 0, towers = 0;

    for(int i = 0; i < blocks; ++i){
        int thisBlock; cin >> thisBlock;

        if(thisBlock > lastBlock) towers++;

        lastBlock = thisBlock;
    }

    cout << towers << endl;
    return 0;
}