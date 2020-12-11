#include <iostream>
#include <cmath>

using namespace std;

int gcd(int x, int y){
    if(y == 0){
        return x;
    }
    return gcd(y, x % y);
}

void addOrSubtract(int *x1, int *y1, string *op, int *x2, int *y2){
    *x1 *= *y2;
    *x2 *= *y1;
    int y = *y1 * *y2;

    int x;
    if(*op == "+"){
        x = *x1 + *x2;
    }else{
        x = *x1 - *x2;
    }

    int GCD = gcd(abs(x), abs(y));

    x /= GCD;
    y /= GCD;


    cout << x << " / " << y << endl;
}

void multiply(int *x1, int *y1, int *x2, int *y2){
    int x = *x1 * *x2;
    int y = *y1 * *y2;
    
    int GCD = gcd(abs(x), abs(y));

    x /= GCD;
    y /= GCD;

    cout << x << " / " << y << endl;
}

void divide(int *x1, int *y1, int *x2, int *y2){
    int x = *x1 * *y2;
    int y = *x2 * *y1;

    if(y < 0){
        x *= -1;
        y *= -1;
    }

    int GCD = gcd(abs(x), abs(y));

    x /= GCD;
    y /= GCD;


    cout << x << " / " << y << endl; 
}



int main() {
    int cases, x1, y1, x2, y2;
    string op;

    cin >> cases;
    
    for(int i = 0; i < cases; ++i){
        cin >> x1 >> y1 >> op >> x2 >> y2;
        


        if (y1 < 0) {
            x1 *= -1;
            y1 *= -1;
        }


        if(y2 < 0){
            x2 *= -1;
            y2 *= -1;
        }


        if (op.compare("+") == 0 || op.compare("-") == 0){
            addOrSubtract(&x1, &y1, &op, &x2, &y2);
        }else if (op.compare("*") == 0){
            multiply(&x1, &y1, &x2, &y2);
        }else{
            divide(&x1, &y1, &x2, &y2);
        }
    }

    return 0;
}



