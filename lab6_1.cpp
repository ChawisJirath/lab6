#include<iostream>
using namespace std;
int main() {
    int number;
    int odd=0,even=0;
    while (true) {
        cout << "Enter an integer: ";
        cin >> number;
        if (number==0) {
            break;
        }else if (number%2==0) {
            even++;
        }else if (number%2==1) {
            odd++;
        }
        
    }
    cout << "#Even numbers = " << even << endl << "#Odd numbers = " << odd ;



    return 0;
}
