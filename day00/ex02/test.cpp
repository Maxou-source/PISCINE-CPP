#include <ctime>
#include <iostream>
#include <iomanip>
#include <sstream>


void printCurrentDateTime()
{
    std::time_t now = std::time(nullptr);
    std::tm timeinfo = *std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", &timeinfo);
    std::cout << buffer;
}

int main()
{
	printCurrentDateTime();
}