#include <iostream>
using namespace std;

//func:
void printGfg(int n){
    // base case:
    if(n==0){
        return;
    }
    cout<<"GFG ";
    printGfg(n-1);
}

int main() {
    int n;
    cin >> n;

    // code here
    printGfg(n);
    
    return 0;
}
