#include <iostream>

using namespace std;

class Solution {
public:
    static bool isPalindrome(int x) {
        int originalNumber = x;
        int reversedNumber = 0;

        while (x > 0) {
            int remainder = x % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            x /= 10;
        }

        return originalNumber == reversedNumber;
    }
};

int main() {
    Solution s1;
    cout << s1.isPalindrome(1234567899);
}