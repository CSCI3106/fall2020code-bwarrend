#include <iostream>

using namespace std;


int main(){
    string inny;
    cin >> inny;

    if (inny.compare("OCT 31") == 0 || inny.compare("DEC 25") == 0){
        cout << "yup" << endl;
    }else{
        cout << "nope" << endl;
    }
    return 0;
}