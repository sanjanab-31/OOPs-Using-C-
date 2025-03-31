#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string text, word;
    map<string, int> freq;
    cout << "Enter a sentence: ";
    getline(cin, text);

    stringstream ss(text);
    while (ss >> word)
        freq[word]++;

    for (auto pair : freq)
        cout << pair.first << ": " << pair.second << endl;

    return 0;
}

