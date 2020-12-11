#include <iostream>

using namespace std;

int main(){
    int number; cin >> number;
    int score = 0;

    for(int i = 2; i*i < number; ++i){
        if(number == 1) score++;
        if(number % i == 0){
            number = number / i;
            i = 1;
            score++;
        }
        if(number == 1) break;
    }
    
    cout << score << endl;

    return 0;
}