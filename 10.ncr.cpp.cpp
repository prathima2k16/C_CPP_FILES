#include<iostream>
using namespace std;
using namespace std; 
int fact(int n); 
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  
int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int main() 
{ 
    int n = 5, r = 3; 
    cout << nCr(n, r); 
    return 0; 
} 
