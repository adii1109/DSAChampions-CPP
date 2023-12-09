#include<iostream>
using namespace std;



class Solution {
public:
    int hammingDistance(int x, int y) {
        // XOR the two numbers
        int xorResult = x ^ y;
        
        // Count the number of set bits in xorResult
        int distance = 0;
        while (xorResult) {
            // Increment distance if the least significant bit is set
            distance += xorResult & 1;
            
            // Right shift xorResult to check the next bit
            xorResult >>= 1;
        }
        
        return distance;
    }
};

int main() {
    Solution solution;
    
    // Example 1
    int x1 = 1, y1 = 4;
    int result1 = solution.hammingDistance(x1, y1);
    cout << "Example 1: " << result1 << endl; // Output: 2
    
    // Example 2
    int x2 = 3, y2 = 1;
    int result2 = solution.hammingDistance(x2, y2);
    cout << "Example 2: " << result2 << endl; // Output: 1
    
    return 0;
}
