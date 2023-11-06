#include <iostream>
using namespace std;;
class Item
{
private:
    int number;
    double cost;

public:
    void displaydata() 
    {
        std::cout << "Number: " << number << std::endl;
        std::cout << "Cost: $" << cost << std::endl;
    }

    friend void getdata(Item &item); 
};
void getdata(Item &item)
{
    std::cout << "Enter the item number: ";
    std::cin >> item.number;

    std::cout << "Enter the item cost: $";
    std::cin >> item.cost;
}

int main()
{
    Item item1;
    getdata(item1);

    std::cout << "Item Information:\n";
    item1.displaydata();

    return 0;
}
