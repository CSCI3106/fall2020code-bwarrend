#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int mn, md, mx;
    int one, two, three; cin >> one >> two >> three;
    string order; cin >> order;
    
    int arra[] = {one, two, three};
    sort(arra, arra + 3);

    string a = string(1,order[0]);
    string b = string(1,order[1]);
    string c = string(1, order[2]);

    string outty = "";

    
    if(a.compare("A") == 0) cout << arra[0] << " ";
    if(a.compare("B") == 0) cout << arra[1] << " ";
    if(a.compare("C") == 0) cout << arra[2] << " ";
    
    if(b.compare("A") == 0) cout << arra[0] << " ";
    if(b.compare("B") == 0) cout << arra[1] << " ";
    if(b.compare("C") == 0) cout << arra[2] << " ";

    if(c.compare("A") == 0) cout << arra[0] << endl;
    if(c.compare("B") == 0) cout << arra[1] << endl;
    if(c.compare("C") == 0) cout << arra[2] << endl;

    cout << outty << endl;

    return 0;
}