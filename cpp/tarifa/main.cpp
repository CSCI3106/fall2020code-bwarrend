#include <iostream>

using namespace std;


int main(){
    int total = 0;
    int dLim;
    cin >> dLim;
    const int DATA_LIMIT = dLim;

    int months;
    cin >> months;

    for (int i = 0; i < months; ++i){
        int thisMonth;
        cin >> thisMonth;
        
        total += DATA_LIMIT - thisMonth;
    }

    cout << total + DATA_LIMIT << endl;



    return 0;
}