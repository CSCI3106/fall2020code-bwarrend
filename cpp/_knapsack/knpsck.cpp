#include <bits/stdc++.h> 
using namespace std; 

int max(int a, int b) { return (a > b) ? a : b; } 

int knapSack(int W, int wt[], int val[], int n) 
{ 
   
    if (n == 0 || W == 0){
        cout << "n: " << n << "W: " << W << endl;
        return 0;
    }
  

    if (wt[n - 1] > W){
        cout << "if: " << n-1 << endl;
        return knapSack(W, wt, val, n - 1);
    }

    else{

        cout << "else: " << n-1 << endl;
        return max( 
            val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1)); 
    }
} 
  

int main() 
{ 
    int val[] = {5, 4, 3, 2}; 
    int wt[] = {4, 3, 2, 1}; 
    int W = 6; 
    int n = sizeof(val) / sizeof(val[0]); 
    cout << knapSack(W, wt, val, n); 
    return 0; 
} 