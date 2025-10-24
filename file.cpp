#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("input.txt");
    string text;

    cout << "Enter text (type END on a new line to stop):\n";
    while (true) {
        getline(cin, text);
        if (text == "END") break;
        outFile << text << endl;
    }
    outFile.close();

    ifstream inFile("input.txt");
    ofstream copyFile("copy.txt");

    int lineCount = 0, wordCount = 0;
    string line;

    while (getline(inFile, line)) {
        lineCount++;
        copyFile << line << endl; // Copy content to another file

        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    inFile.close();
    copyFile.close();

    cout << "\nNumber of lines: " << lineCount << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Contents have been copied to copy.txt" << endl;

    return 0;
}
