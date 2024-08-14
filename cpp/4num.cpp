#include <iostream>
using namespace std;

int main(){
    int mainnum, num1, num2, num3, num4, count = 0;
    cin >> mainnum >> num1 >> num2 >> num3 >> num4;
    for(int j = 2; j < mainnum / 2; j++){
        for(int i = 2; i < j; i++){
            if(mainnum % i == 0){
                if(i == num1 || i == num2 || i == num3 || i == num4){
                    count++;
                }
            }
        }
    }
}