#include <iostream>

using namespace std;

int main(){
    int cases;

    cin >> cases;

    int total = 0;

    for(int i = 0; i < cases; ++i){
        int inp;
        cin >> inp;

        if(inp < 0){
            total = total + (-1 * inp);
        }
    }

    cout << total << endl;

    return 0;
}