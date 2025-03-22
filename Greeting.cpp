#include <iostream>
#include <string>
using namespace std;
class Greeting {
private:
    string name;
    int age;
public:
    Greeting(string userName, int userAge) {
        name = userName;
        age = userAge;
    }
    void generateGreeting() {
        cout << "Hello, " << name << "! ";
        cout << "Wow, you are " << age << " years old! ";
        cout << "Hope you have a fantastic day ahead!" << endl;
    }
};
int main() {
    string userName;
    int userAge;
    cout << "Enter your name: ";
    getline(cin, userName);
    cout << "Enter your age: ";
    cin >> userAge;
    Greeting userGreeting(userName, userAge);
    userGreeting.generateGreeting();
    return 0;
}
