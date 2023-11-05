#include <iostream>
using namespace std;

class MaximumFinder
{
private:
    int num1;
    int num2;
    int num3;

public:
    
    MaximumFinder(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    int findMaximum() {
        int max = num1;
        if (num2 > max) {
            max = num2;
        }
        if (num3 > max) {
            max = num3;
        }
        return max;
    }
};

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    MaximumFinder finder(num1, num2, num3);

    int maximum = finder.findMaximum();

    std::cout << "The maximum number is: " << maximum << std::endl;

    return 0;
}
