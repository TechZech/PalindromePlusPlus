#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

bool isPalindrome(string line);
string splitPalindrome(string palindrome);

int main(int argc, char** argv)
{
    string filename = argv[1];
    ifstream file(filename);
    string line;
    ofstream outfile(filename + ".out");

    if (file.is_open()) {
        while (getline(file, line)) {
//            outfile << 'a' + line + '\n';

        }
        file.close();
        outfile.close();
    } else {
        cout << "Error: Unable to open " << filename << endl;
    }

    return 0;
}

// Returns if the line is a valid palindrome
bool isPalindrome(string line) {

}

// Returns split palindrome
string splitPalindrome(string palindrome) {

}