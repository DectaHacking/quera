#include <iostream>
using namespace std;

int main(void){
    int row1[8], row2[8];
    for (int i = 0; i < 8; i++){
        cin >> row1[i];
    }
    for (int i = 0; i < 8; i++){
        cin >> row2[i];
    }
    int index = 0;
    for(int i = 0; i < 8; i++){
        if(row1[i] == 1 && row2[i] == 1){
            index++;
        }
    }
    cout << index;
    return 0;
}