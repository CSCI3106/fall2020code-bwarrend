#include <iostream>

using namespace std;

int main(){
    int maxCapacity, stops; cin >> maxCapacity >> stops;
    int onTheTrain, leftTheTrain, enteredTheTrain, waitedAtStation;
    onTheTrain = leftTheTrain = enteredTheTrain = waitedAtStation = 0;

    bool isPossible = true;
    
    for(int i = 0; i < stops; ++i){
        cin >> leftTheTrain >> enteredTheTrain >> waitedAtStation;

        //More people can leave the train than were on the train
        if(leftTheTrain > onTheTrain) isPossible = false;
        onTheTrain += enteredTheTrain - leftTheTrain;
        
        //More people enter the train than can fit
        if(onTheTrain > maxCapacity) isPossible = false;

        //People are staying at station when train is not at capacity
        if(onTheTrain < maxCapacity && waitedAtStation > 0) isPossible = false;

        //Less than 0 people are on the train
        if(onTheTrain < 0) isPossible = false;

        //People are waiting at the station at the last station
        if(i == stops -1 && waitedAtStation > 0) isPossible = false;
    }

    //People remained on the train after the last station
    if(onTheTrain > 0) isPossible = false;

    if(isPossible) cout << "possible" << endl;
    else cout << "impossible" << endl; 

    return 0;
}