#include <iostream>
using namespace std;
int main(void){
    int num;
    cin >> num;
    long hel;
    hel = num % 100;
    cout << (num - hel) / 100 << "\t" << hel;

    return 0;
}