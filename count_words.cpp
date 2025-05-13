#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count = 1;
    for (char ch : sentence)
        if (ch == ' ')
            count++;

    cout << "Word count: " << count << endl;
    return 0;
}
