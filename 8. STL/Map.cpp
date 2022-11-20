#include <iostream>
#include <map>
#include <algorithm>
#define CT std::cout
#define CI std::cin

int main() {
    int ch{}, val{};
    std::map<std::string, int> mp;
    std::map<std::string, int>::iterator it;

    std::string key;

    while(1) {
        CT << "\n------------------\n";
        CT << "Map Implementation in stl\n";
        CT << "\n------------------\n"
           << "1. Insert elemnt into the map: \n"
           << "2. Delete element from the map: \n"
           << "3. Size of the Map: \n"
           << "4. Find element at the key: \n"
           << "5. Display by iterator: \n"
           << "6. Count elements at a specific key: \n"
           << "7. Exit \n";

        CT << " --Enter a choice--  ";
        CI >> ch;

        if(ch < 1 || ch > 7) break;

        switch(ch) {
            case 1:
                CT << "Enter key, val to insert: ";
                CI >>  key >> val;
                mp.insert(std::pair<std::string, int>(key, val));
                break;            
            case 2:
                CT << "Enter key to delete pair: \n";
                CI >> key;
                mp.erase(key);
                break;
            case 3:
                CT << "Size of the map: "  << mp.size();
                CT << '\n';
                break;
            case 4:
                CT << "Enter key to get element: ";
                CI >> key;
                if(1) {
                    CT << "Val is: " << mp.find(key)->second << std::endl;
                } else {
                    CT << "No such key found!\n";
                }
                break;
            case 5:
                CT << "Displaying map by iterator: \n";
                for(auto i = mp.begin(); i != mp.end(); i++) {
                    CT << "{ " << i->first
                       << " : " << i->second << " }," << std::endl;
                }
                break;
            case 6:
                CT << "Enter the key at which values to count: ";
                CI >> key;
                CT << mp.count(key) << std::endl;
                break;
            case 7:
                exit(1);
                break;
            default: break;
        }

    }

}