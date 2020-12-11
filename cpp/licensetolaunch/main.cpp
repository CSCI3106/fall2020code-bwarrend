#include <iostream>

using namespace std;

int main(){
    int days;
    int least = 100001;
    int leastIndex = 0;

    cin >> days;

    for(int i =0; i < days; ++i){
        int amount;
        cin >> amount;

        if(amount < least){
            least = amount;
            leastIndex = i;
        }
    }

    cout << leastIndex << endl;

    return 0;
}