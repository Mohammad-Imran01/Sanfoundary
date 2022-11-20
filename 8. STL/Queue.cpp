#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>
#define CT std::cout
#define CI std::cin

int main() {
    std::queue<int> q;
    int ch, val;

    while(1) {
        CT << "\n-----------------------\n"
           << "Queue Implmentation in STL" 
           << "\n-----------------------\n\n"
           << "1. Insert element.\n"
           << "2. Delete element.\n"
           << "3. Size of the queue.\n"
           << "4. Front element.\n"
           << "5. Back element. \n"
           << "6. Exit.\n";

           CT << "Enter a choice: " 
           ; CI >> ch;

        if(ch < 1 || ch > 6) break;

        switch(ch) {
            case 1:
                CT << "Enter value to be inserted: ";
                CI >> val;
                q.push(val);
                break;
            case 2:
                CT << "Popped out: " << q.front() << std::endl;
                q.pop();
                break;
            case 3:
                CT << "Queue size is " << q.size() << std::endl;
                break;
            case 4:
                CT << "Front element: " << q.front() << std::endl;
                break;
            case 5:
                CT << "last element: " << q.back() << std::endl;
                break;
            default: 
                break;
        }
    }

    EXIT_SUCCESS;    
}