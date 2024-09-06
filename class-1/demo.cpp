#include <iostream>

void printPattern(int N) {
    for (int i = 1; i <= N; ++i) {
        // Print the top row of the L-shape
        if (i == 1) {
            for (int j = 1; j <= N; ++j) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        } else {
            // Print the vertical part of the L-shape and the bottom row
            for (int j = 1; j <= N; ++j) {
                if (j == 1 || i == N) {
                    std::cout << "* ";
                } else {
                    std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    int N4 = 4;
    int N5 = 5;

    std::cout << "Example\n\n";
    std::cout << "N = 4\n";
    printPattern(N4);
    std::cout << "\nN = 5\n";
    printPattern(N5);

    return 0;
}
