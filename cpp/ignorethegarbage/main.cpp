#include <iostream>

using namespace std;

bool isValid(int *num);
void reverseAndSub(int *num);

int main(){
    int num;

    while(cin >> num){
        int count = 0;

        for(int i = 1; i <= num; ++i){
            count++; 

            if(!isValid(&count)){
                i--;
            }
        }

        reverseAndSub(&count);
    }
    
    return 0;
}

bool isValid(int *num){
    int rightDigit;
    int n = *num;

    while(n > 1){
        rightDigit = n % 10;

        if(rightDigit == 3 || rightDigit == 4 || rightDigit == 7){
            return false;
        }
        n /= 10;
    }
    return true;
}

void reverseAndSub(int *num){
    int rightDigit;
    int n = *num;

    while(n > 0){
        rightDigit = n % 10;
        if (rightDigit == 6){
            cout << 9;
        }else if(rightDigit == 9){
            cout << 6;
        }else{
            cout << rightDigit;
        }
        n /= 10;
    }

    cout << endl;
}
