#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <climits>

int main() {
    std::vector<int> vNumbers;

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < 10; i++)
        vNumbers.push_back(rand() % 100);

    for (int i = 0; i < vNumbers.size(); i++)
        std::cout << vNumbers[i] << ',';
    std::cout << '\n';

    int nSmallest = INT_MAX;
    for (int i = 0; i < vNumbers.size(); i++)
        if (vNumbers[i] < nSmallest)
            nSmallest = vNumbers[i];
    
    std::cout << "The smallest number is " << nSmallest << '\n';
}