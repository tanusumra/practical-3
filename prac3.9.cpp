#include <iostream>
using namespace std;
class Max {
private:
    int num_1;
    int num_2;

public:
    void input() {
        std::cout << "Enter the first number: ";
        std::cin >> num_1;
        std::cout << "Enter the second number: ";
        std::cin >> num_2;
    }

    void display() {
        std::cout << "First number: " << num_1 << std::endl;
        std::cout << "Second number: " << num_2 << std::endl;
    }

    void largest() {
        input();      
        display();    
        if (num_1 > num_2) {
            std::cout << "The largest number is: " << num_1 << std::endl;
        } else if (num_2 > num_1) {
            std::cout << "The largest number is: " << num_2 << std::endl;
        } else {
            std::cout << "Both numbers are equal." << std::endl;
        }
    }
};

int main() {
    Max maxNumbers;

    maxNumbers.largest(); 

    return 0;
}
