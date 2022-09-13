class Solution {
public:
    bool isEven(char ch) {
        int n = (int)ch;
        if (n&1) return false;
        return true;
    }
    bool squareIsWhite(string coordinates) {
        char alphabet = coordinates[0];
        char number = coordinates[1];
        if (alphabet == 'a' or alphabet=='c' or alphabet=='e' or alphabet=='g') {
            if (isEven(number)) return true;
            return false;
        }
        else {
            if (!isEven(number)) return true;
            return false;
        }
    }
};