#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b) {
        // XOR the two numbers to get a number with set bits where A and B differ
        int xorResult = a ^ b;

        // Count the number of set bits in the XOR result
        int count = 0;
        while (xorResult) {
            // Increment count for each set bit
            count += xorResult & 1;
            // Right shift XOR result to check the next bit
            xorResult >>= 1;
        }

        return count;
    }
};

int main() {
    int t;
    cin >> t; // input the testcases
    while (t--) //while testcases exist
    {
        int a, b;
        cin >> a >> b; //input a and b

        Solution ob;
        cout << ob.countBitsFlip(a, b) << endl;
    }
    return 0;
}
