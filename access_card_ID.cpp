#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string first, last;
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    srand(time(0));
    int randNum = rand() % 9000 + 1000; 
    cout << "Secure Access Card ID: " << first[0] << last[0] << randNum << endl;
    return 0;
}
