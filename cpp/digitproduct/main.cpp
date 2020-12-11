#include <iostream>

using namespace std;

int multiplyTheDigits(int num);

int main(){
    int num; cin >> num;    
    cout << multiplyTheDigits(num) << endl;

    return 0;
}

int multiplyTheDigits(int num){
    if(num < 10){
        return num;
    }

    int total = 1;

    int digit;
    while(num > 0){
        digit = num % 10;

        if(digit == 0){
            num /= 10;
        }else{
            total *= digit;
            num /=10;
        }
    }
    return multiplyTheDigits(total);
}