#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    int people; cin >> people;
    
    int *rolls = new int[people];


    for(int i = 0; i < people; ++i) cin >> rolls[i];

    int currentMax = 0;
    int currentIndex;
    
    for(int i = 0; i < people; ++i){
        if(rolls[i] > currentMax){            
            bool matched = false;
            for(int j = 0; j < people; ++j){
                if(i == j);
                else{
                    if(rolls[i] == rolls[j]){
                        matched = true;
                        break;
                    }
                }
            }
            if (!matched){
                currentMax = rolls[i];
                currentIndex = i;
            }
        }
    }

    if(currentMax == 0){
        cout << "none" << endl;
    }else{
            cout << currentIndex +1 << endl;
    }

    return 0;
}