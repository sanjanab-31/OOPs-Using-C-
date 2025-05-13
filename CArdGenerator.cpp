#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;
string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}
string generateAccessCard(string name, string id) {
    name = toUpperCase(name);
    string initials = name.substr(0, 2);
    string lastDigits = id.substr(id.length() - 2);
    srand(time(0));
    int randomNum = 100 + (rand() % 900);

    string accessCard = initials + lastDigits + to_string(randomNum);
    return accessCard;
}
int main() {
    string name, id;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your ID number: ";
    cin >> id;
    if (id.length() < 2) {
        cout << "Invalid ID! Please enter a valid ID number." << endl;
        return 1;
    }
    string accessCard = generateAccessCard(name, id);
    cout << "Your Secure Access Card ID: " << accessCard << endl;
    return 0;
}
