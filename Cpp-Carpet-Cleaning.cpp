#include <iostream>

int main()
{
    int small_room_number;
    int big_room_number;
    int small_room_price = 25;
    int big_room_price = 35;
    int cost;
    double total_estimate;
    double tax;
    std::cout << "Welcome to Evanna's Carpet Cleaning Service" << "\n" << "Price for small room: $25" << "\n" << "Price for big room:$35" << "\n";
    std::cout << "How many small rooms you want cleaned? ";
    std::cin >> small_room_number;
    std::cout << "How many big rooms you want cleaned? ";
    std::cin >> big_room_number;
    cost = (25 * small_room_number) + (35 * big_room_number);
    std::cout << "Cost: $" << cost << "\n";
    tax = cost * 0.06;
    std::cout << "Tax: $" << tax << "\n";
    std::cout << "===========================" << "\n";
    total_estimate = cost + tax;
    std::cout << "Total Estimate: $" << total_estimate << "\n" << "This estimate is valid for 30 days" << "\n";
    std::cout << "===========================" << "\n";
    std::cin.get();
    return 0;
}

