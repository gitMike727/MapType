#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

int main() 
{
    std::map<int, std::string> heroList{ {001, "Warrior"},{002, "Archer"}, {003, "Mage"}, {004, "Healer"}};

    std::cout << "The size of hero list is: " << heroList.size() << std::endl;

    std::cout << std::endl;

    std::cout << heroList[001] << std::endl;
    std::cout << heroList[002] << std::endl;
    std::cout << heroList[003] << std::endl;
    std::cout << heroList[004] << std::endl;

    std::cout << std::endl;

    std::cout << "Replace Warrior with Tank..." << std::endl;
    
    std::cout << std::endl;

    std::cout << "The size of hero list is: " << heroList.size() << std::endl;

    std::cout << std::endl;
    
    heroList[001] = "Tank";
    std::cout << heroList[001] << std::endl;
    std::cout << heroList[002] << std::endl;
    std::cout << heroList[003] << std::endl;
    std::cout << heroList[004] << std::endl;

    std::cout << std::endl;


    return 0;
}