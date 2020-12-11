#include <iostream>
#include <cmath>

using namespace std;



int main() {
    int gold, silver, copper;

    cin >> gold >> silver >> copper;
    
    int total = gold * 3 + silver * 2 + copper;


    if(total >= 8){
        cout << "Province or ";
    }else if(total >= 5){
        cout << "Duchy or ";
    }else if(total >= 2){
        cout << "Estate or ";
    }

    if(total >= 6){
        cout << "Gold" << endl;
    }else if(total >= 3){
        cout << "Silver" << endl;
    }else{
        cout << "Copper" << endl;
    }
    


    return 0;
}



