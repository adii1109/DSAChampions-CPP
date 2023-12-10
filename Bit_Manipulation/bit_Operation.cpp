#include <iostream>

using namespace std;

int set_bit(int number, int position) {
    // Set the bit at the specified position to 1.
    return number | (1 << position);
}

int clear_bit(int number, int position) {
    // Clear the bit at the specified position to 0.
    return number & ~(1 << position);
}

int toggle_bit(int number, int position) {
    // Toggle (flip) the bit at the specified position.
    return number ^ (1 << position);
}

int get_bit(int number, int position) {
    // Get the value of the bit at the specified position (0 or 1).
    return (number >> position) & 1;
}

int main() {
    int num = 5;  // binary: 101

    // Set the bit at position 1
    num = set_bit(num, 1);  // binary: 111 (7 in decimal)

    // Clear the bit at position 0
    num = clear_bit(num, 0);  // binary: 110 (6 in decimal)

    // Toggle the bit at position 2
    num = toggle_bit(num, 2);  // binary: 010 (2 in decimal)

    // Get the bit at position 1
    int bit_value = get_bit(num, 1);  // bit_value = 1

    cout << "Modified number: " << num << endl;
    cout << "Value of bit at position 1: " << bit_value << endl;

    return 0;
}