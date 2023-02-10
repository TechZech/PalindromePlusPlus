#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

bool isPalindrome(const string& line);
bool equivalentLetters(char x, char y);
string splitPalindrome(const string& palindrome);

int main(int argc, char** argv)
{
    string filename = argv[1];
    ifstream file(filename);
    ofstream outfile(filename + ".out");
    int lineNum = 1;
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            // Confirm line is a palindrome
            if(!isPalindrome(line)) {
                cout << "Error: Line " << lineNum << " is not a palindrome" << endl;
                return 1;
            }
            outfile << line << '\n';
            lineNum++;
        }

        file.close();
        outfile.close();
    } else {
        cout << "Error: Could not open " << filename << endl;
        return 1;
    }

    return 0;
}

// Returns if the line is a valid palindrome
bool isPalindrome(const string& line) {
    for(int x = 0, y = line.length()-1; x < y; x++, y--)
    {
        if (!equivalentLetters(line[x], line[y]))
            return false;
    }
    return true;
}

// Returns split palindrome
string splitPalindrome(const string& palindrome) {
    return "d";
}

bool equivalentLetters(char x, char y) {
    switch (x) {
        case '(':
            x = ')';
            break;
        case ')':
            x = '(';
            break;
        case '{':
            x = '}';
            break;
        case '}':
            x = '{';
            break;
        case '[':
            x = ']';
            break;
        case ']':
            x = '[';
            break;
        case '<':
            x = '>';
            break;
        case '>':
            x = '<';
            break;
        case '/':
            x = '\\';
            break;
        case '\\':
            x = '/';
            break;
        default:
            x = x;
    }

    return (x == y);
}