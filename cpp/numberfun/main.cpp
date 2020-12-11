#include <iostream>


using namespace std;

int main(){
    int cases;
    float a, b, c;
    cin >> cases;

    for (int i = 0; i < cases; ++i){
        cin >> a >> b >> c;

        
        if(a + b == c || a - b == c || b - a == c || a * b == c || a / b == c || b / a == c){
            cout << "Possible" << endl;
        }else{
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}