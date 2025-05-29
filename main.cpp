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

    std::cout << "Add Ninja into the hero list..." << std::endl;
    //insert
    heroList.insert( {005, "Ninja"} );

    std::cout << std::endl;

    std::cout << "The size of hero list is: " << heroList.size() << std::endl;

    
    std::cout << heroList[001] << std::endl;
    std::cout << heroList[002] << std::endl;
    std::cout << heroList[003] << std::endl;
    std::cout << heroList[004] << std::endl;
    std::cout << heroList[005] << std::endl;


    std::cout << std::endl;

    //erase
    std::cout << "Erase Ninja from the list..." << std::endl;
    heroList.erase(005);

     std::cout << std::endl;

    std::cout << "The size of hero list is: " << heroList.size() << std::endl;

    
    std::cout << heroList[001] << std::endl;
    std::cout << heroList[002] << std::endl;
    std::cout << heroList[003] << std::endl;
    std::cout << heroList[004] << std::endl;
    
    std::cout << "? "<< heroList[005] << std::endl;//this line checks if "005" exists. if not, it adds a "005", basically doing heroList.insert( {005, "Ninja"} );


    std::cout << std::endl;

    std::cout << "The size of hero list is: " << heroList.size() << std::endl;

    std::cout << std::endl;


    //clear
    std::cout << "Clear the map..." << std::endl;
    heroList.clear();

    std::cout << std::endl;

    std::cout << "The size of hero list is: " << heroList.size() << std::endl;

    std::cout << std::endl;

    bool Exists = heroList.find(005) != heroList.end();

    std::cout << Exists << std::endl;




    return 0;
}