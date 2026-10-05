#include <iostream>
using namespace std;


int fibonacci (int number) {
    
    if (number == 0){
        return 0;
    }
    else if (number == 1){
        return 1;
    }
    else {
        return fibonacci(number-1) + fibonacci(number-2);
    }
}

int main() {
    int number;

    cout << "input number: ";
    cin >> number;

    for (int i = 0; i < number; i++){
        cout << fibonacci(i);

        if (i < number - 1){
            cout << ", " ;
        }
    }
    cout << endl;
    return 0;
}