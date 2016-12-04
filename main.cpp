#include <iostream>

using namespace std;


//loop through and check each lsb until 0
//count all ones found
//O(n)
uint64_t numberOfOnesInBinary1(uint64_t n) {
    uint64_t count = 0;
    while (n>0) {
        if ((n&1) == 1) {
            count ++;
        }
        n = n>>1;
    }
    return count;
}

int main() {
    uint64_t n = 10;
    uint64_t result = numberOfOnesInBinary1(n);
    cout << result << endl;
    return 0;
}