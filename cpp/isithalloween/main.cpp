#include <iostream>

using namespace std;


int main(){
    string inny, one, two;
    cin >> one;
    cin >> two;

    inny = one + " " + two;

    if (inny.compare("OCT 31") == 0 || inny.compare("DEC 25") == 0){
        cout << "yup" << endl;
    }else{
        cout << "nope" << endl;
    }
    return 0;
}

//who i am 
//where im from
//when grad
//Married and have two daughters
