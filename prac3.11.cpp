#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    int product_id;
    std::string product_name;
    double unit_price;

public:
    void getdata() 
    {
        std::cout << "Enter Product ID: ";
        std::cin >> product_id;
        std::cin.ignore(); 

        std::cout << "Enter Product Name: ";
        std::getline(std::cin, product_name);

        std::cout << "Enter Unit Price: ";
        std::cin >> unit_price;
    }
    void putdata() 
    {
        std::cout << "Product ID: " << product_id << std::endl;
        std::cout << "Product Name: " << product_name << std::endl;
        std::cout << "Unit Price: $" << unit_price << std::endl;
    }
};

int main()
{
    Product product1, product2;

    std::cout << "Enter information for Product 1:\n";
    product1.getdata();

    std::cout << "Enter information for Product 2:\n";
    product2.getdata();

    std::cout << "\nProduct 1 Information:\n";
    product1.putdata();

    std::cout << "\nProduct 2 Information:\n";
    product2.putdata();

    return 0;
}
