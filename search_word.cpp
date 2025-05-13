#include <iostream>
using namespace std;

int main() {
    string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Enter word to search: ";
    cin >> word;

    if (sentence.find(word) != string::npos)
        cout << "Word found!" << endl;
    else
        cout << "Word not found!" << endl;

    return 0;
}
