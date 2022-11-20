#include <iostream>
#include <vector>
#include <algorithm>
#define VI std::vector<int>
#define CT std::cout
#define CI std::cin

int main() {
    VI v;
    int ch{}, val{1};

    CT << "1. Fill vector: \n"
       << "2. Show vector: \n"
       << "3. Clear vcetor: \n"
       << "4. push_In: \n"
       << "5. Pop_Out: \n"
       << "6. Sort vector: \n"
       << "7. Exit: " << std::endl;

    
    while(1) {
        CT << "Enter a choice: ";
        CI >> ch;
        if(ch >= 1 && ch <= 6)
        switch (ch) {
            case 1: {
                CT << "Fill vector: \n";
                while(1 ) {
                    CI >> val;
                    if(val == 0) break;
                    v.push_back(val);
                }
                break;
            }
            case 2: {
                if(v.size() == 0) {
                    CT << "Vector is empty: \n";
                }
                CT << "Vector elements: \n";
                for(int i : v ) CT << i << ' ';
                CT << '\n';
                break;
            }
            case 3: {
                v.clear();
                CT << "Vector cleared: \n";
                break;
            }
            case 4: {
                CT << "Enter a num to push back: ";
                CI >> val;
                v.push_back(val);
                break;
            }
            case 5: {
                CT << "Popped out: " << v.back();
                v.pop_back();
                CT << '\n';
                break;
            }
            case 6: {
                std::sort(v.begin(), v.end());
                CT << "Vector sorted: \n";
            }
            case 7: {
                break;
            }
            default: break;
        }
    }
    return 0;    
}