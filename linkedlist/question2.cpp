#include <iostream>
#include <string>

using namespace std;

int findRotationCount(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return -1;  // Different lengths, not a rotation
    }

    string concatenated = s1 + s1;

    // Check if s2 is a substring of concatenated
    size_t found = concatenated.find(s2);

    if (found != string::npos) {
        // Calculate the number of rotations needed to match s2
        return found / s1.length();
    } else {
        return -1;  // s2 is not a rotation of s1
    }
}

int main() {
    string s1, s2;

    cout << "Enter the first string (s1): ";
    getline(cin, s1);

    cout << "Enter the second string (s2): ";
    getline(cin, s2);

    int rotations = findRotationCount(s1, s2);

    if (rotations != -1) {
        cout << "The second string is a rotation of the first string with " << rotations << " rotations." << endl;
    } else {
        cout << "The second string is not a rotation of the first string." << endl;
    }

    return 0;
}
