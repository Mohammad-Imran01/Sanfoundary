#include <queue>
#include <iostream>
#define CT std::cout
#define CI std::cin



int main() {
    std::priority_queue<int> pq;
    int ch, val;

    while(1) {
        CT << "\n\n------------------------------------\n"
           << "-- Implementation of priority queue --\n"
           << " ----------------------------------\n"
           << "1. Insert element.\n"
           << "2. delete element.\n"
           << "3. Size of the p_Queue.\n"
           << "4. Top element.\n"
           << "5. Exit" << std::endl;
        
        CT << "Enter your choice: " ;
        CI >> ch;

        if(ch < 1 || ch >= 5) break;

        switch(ch) {
            case 1:
                CT << "Enter element: ";
                CI >> val;
                pq.push(val);
                break;
            case 2:
                if(pq.empty()) {
                    CT << "Queue is empty\n";
                    break;
                }
                CT << "Deleted: " << pq.top() << std::endl;
                pq.pop();
                break;
            case 3:
                CT << "Size of the queue: " << pq.size() 
                   << std::endl;
                break;
            case 4:
                CT << "Top element: " << pq.top() << std::endl;
                break;
            case 5:
                break;
            default:
                break;
        }
    }
    return EXIT_SUCCESS;
}