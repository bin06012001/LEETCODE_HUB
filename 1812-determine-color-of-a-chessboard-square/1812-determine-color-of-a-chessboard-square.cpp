class Solution {
public:
    bool squareIsWhite(string coordinate) {
        return (coordinate[0] - 'a') % 2 != (coordinate[1] - '1') % 2;
    }
};