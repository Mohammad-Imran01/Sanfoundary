#include <iostream>
#include <algorithm>
#define CT std::cout
#define CI std::cin
#define NL std::endl
#include <vector> 
#include <string>
#include <list>

int main() {
    int ch, val;
    std::string name;
    std::vector<int> vect;
    std::list<int> list;

    while(1) {
        CT << "\n--------------------------\n"
           << "- Some Sorting Algorithms -\n"
           << "---------------------------\n"
           << "1. Insert in the vector.\n"
           << "2. Enter the string. \n"
           << "3. Enter in list.\n"
           << "4. Sort the Vector.\n"           
           << "5. Sort string.\n"
           << "6. Sort list.\n"
           << "7. display vector.\n"
           << "8. display string.\n"
           << "9. display list.\n"
           << "Else? Exit!\n";

        CT << "Enter your choice: ";
        CI >> ch;

        if(ch < 1 || ch > 9) break;

        switch(ch) {
            case 1:
                CT << "insert in vector: \n";
                while(1) {
                    CI >> val; if(val == 0) break;
                    vect.push_back(val);
                }
                break; 
            case 2:
                CT << "Enter a string: ";
                CI >> name;
                break;
            case 3:
                CT << "insert in list: \n";
                while(1) {
                    CI >> val; if(val == 0) break;
                    list.push_back(val);
                }
                break;  
            case 4:
                std::sort(vect.begin(), vect.end());
                break;           
            case 5:
                std::sort(name.begin(), name.end());
                break;
            case 6:
                list.sort(); 
                break;
            case 7:
                for(const int& i: vect) CT << i << ' ';
                CT << '\n';
                break;
            case 8:
                CT << name << '\n';
                break;            
            case 9:
                for(const int& i: list) CT << i << ' ';
                CT << '\n';
                break;
            default:
                break;
        }
    }
} 