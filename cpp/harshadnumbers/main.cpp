#include <iostream>
#include <string>

using namespace std;

bool isHarshad(int *n){
    string nS = to_string(*n);
    int sumOfDigits = 0;
    for(int i = 0; i < nS.length(); ++i){
        string nSchar = "";
        nSchar += nS[i];
        sumOfDigits += stoi(nSchar);
    }

    if (*n % sumOfDigits == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;

    cin >> num;

    int thisOne = 0;

    for(int i = num; i < 1000000001; ++i){



        if(isHarshad(&i)){
            thisOne = i;
            break;
        }
    }

    cout << thisOne << endl;
    

    return 0;
}