#include <iostream>
using namespace std;

int sumbyrec(int n){
    if(n==0){
        return 0;
    }
    return n+sumbyrec(n-1);
}

int main() {
    int n;
    cin >> n;

    // code here
    
    cout<< sumbyrec(n);

    return 0;
}
