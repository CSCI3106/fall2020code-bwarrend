#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;
    
    if (a == 0 && b == 0){
        cout << "Not a moose" << endl;
        exit(0);
    }
    
    if(a == b){
        cout << "Even " << a*2 << endl;
    }else{
        cout << "Odd " << max(a, b) * 2 << endl;
    }

    return 0;
}