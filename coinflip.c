// Returns heads or tails once or n amount of times if an integer is passed

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flipcoin() {
    return rand() % 2;
}

int main(int argc, char **argv) {
    // time(0) returns secs since epoch, as a result, calling rand() twice
    // within the same second can return the same result.
    srand(time(0));

    if (argc == 1) {
        char *result = flipcoin() == 0 ? "Heads" : "Tails";
        printf("Flipped %s!\n", result);

    } else if (argc == 2) {
        // Yeah, don't use this.
        int flips = atoi(argv[1]);
        int tails = 0;

        for (int i = 0; i < flips; i++) {
            tails += flipcoin();
        }
        
        printf("Flipped coin %d times: %d Heads, %d Tails!\n", flips, flips-tails, tails);
    }

    return 0;
}
