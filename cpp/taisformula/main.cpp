#include <iostream>
#include <iomanip>

using namespace std;



int main(){
    int samples;
    cin >> samples;

    double lastT;
    double lastL;

    double total = 0;

    for(int i = 0; i < samples; ++i){
        double T;
        double L;

        cin >> T >> L;

        if(i == 0){
            lastT = T;
            lastL = L;
        }else{
            total += (lastL + L)/2 * (T - lastT);
            lastT = T;
            lastL = L;
        }
    }

    cout << setprecision(8) << total / 1000.000000 << endl;


    return 0;
}