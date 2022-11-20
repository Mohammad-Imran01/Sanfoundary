#include <iostream>
#include <string>
#define CT std::cout
#define endl std::endl
#define CI std::cin
#define STR std::string
#define iter std::string::iterator

int main() {
    STR s;
    iter i;

    int ch;

    while(1) {
        CT << "\n-------------------------\n"
           << "-implementation of string stl- \n"
           << "  ---------------------  \n"
           << "1. Get string.\n"
           << "2. Get last element.\n"
           << "3. Get first eleemnt.\n"
           << "4. get size.\n"
           << "5. Reset string.\n"
           << "6. Pop last.\n"
           << "7. Insert an element after last element.\n"
           << "8. Display.\n"
           << "9. Get substr.\n"
           << "10. Exit Success.\n";

        CT << "Enter your choice: ";
        CI >> ch;

        if(ch < 1 || ch > 9) break;

        switch (ch) {
            case 1:
                CT << "Input string: ";
                CI >> s;
                break;
            case 2:
                CT << "Last element: " << s.back() << endl;
                break;
            case 3:
                CT << "First element: " << s.front() << endl;
                break;
            case 4: 
                CT << "Size of the string is: " << s.size() << endl;
                break;
            case 5:
                s.clear();
                CT << "String emptied\n";
                break;
            case 6:
                s.pop_back();
                CT << "Last element popped out!\n";
                break;
            case 7:
                CT << "Enter a char to insert at last: ";
                char c;
                CI >> c;
                s.push_back(c);
                break;
            case 8:
                CT << "Here is your string: " << s;
                break;
            case 9:
                CT << "Enter start and end position: "
                ;int bgn, end;
                CI >> bgn >> end;
                CT << "\nSubstr: " << s.substr(bgn,end);
                break;
            default:
                break;
        }
    }

    return EXIT_SUCCESS;
}