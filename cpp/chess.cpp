#include <iostream>
using namespace std;
int main(void){
    int king, quin, rokh, ele, ho, so;
    int kingh = 1, quinh = 1, rokhh = 2, eleh = 2, hoh = 2, soh = 8;
    cin >> king >> quin >> rokh >> ele >> ho >> so;
    cout << kingh - king << " " << quinh - quin << " " << rokhh - rokh << " " << eleh - ele << " " << hoh - ho << " " << soh - so;

    return 0;
}