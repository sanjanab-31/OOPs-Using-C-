#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string author, title;
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter blog title: ";
    getline(cin, title);

    srand(time(0));
    int randNum = rand() % 1000;

    cout << "Blog Identifier: " << author[0] << title[0] << randNum << endl;
    return 0;
}
