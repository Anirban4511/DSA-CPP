#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const char *s1, const char *s2);

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(&s[0], &s[s.length() - 1])) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }

    return 0;
}

bool isPalindrome(const char *s1, const char *s2) {
    // Base case: If pointers have crossed or are equal, it's a palindrome
    if (s1 >= s2) {
        return true;
    }

    // Check if characters are equal
    if (*s1 != *s2) {
        return false;
    }

    // Move towards the middle
    return isPalindrome(++s1, --s2);
}
