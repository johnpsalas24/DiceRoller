#include <iostream>
#include <cstdlib>
#include <ctime>

extern "C" {
    int rollDice() {
        return rand() % 6 + 1;
    }
}
