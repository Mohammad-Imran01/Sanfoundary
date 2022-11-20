#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
#define CI std::cin
#define CT std::cout

int main() {
    std::set<int> st;
    std::set<int>::iterator it;
    int ch, val;
    
    while(1) {
        CT << "\n-------------------\n"
           << "Set Implementation in STL\n"
           << "-------------------------\n"
           << "1. Insert Element into the set.\n"
           << "2. Delete Element.\n"
           << "3. Get size of the set.\n"
           << "4. Find element.\n"
           << "5. Display by it.\n"
           << "6. Exit.\n"
           <<"Enter your choice: ";
           CI >> ch;

           if(ch < 1 || ch > 6) break;

        switch(ch) {
            case 1:
                CT << "Enter an element to insert: ";
                CI >> val;
                st.insert(val);
                break;
            case 2:
                CT << "Enter the element to be deleted: "; 
                CI >> val;
                st.erase(val);
                break;
            case 3:
                CT << "Size of the set: "
                   << st.size() << std::endl;
                break;
            case 4:
                CT << "Enter an element to find: ";
                CI >> val;
                it = st.find(val);
                if(it == st.end()) CT << "Not found\n";
                else CT << "Found\n";
                break;
            case 5:
                CT << "Displaying map by iterator: \n";
                for(it = st.begin(); it != st.end(); it++) {
                    CT << *it << ' ';
                } CT << '\n';
                break;
            case 6: 
                exit(1);
                break;
            default: break;
        }
    }
}