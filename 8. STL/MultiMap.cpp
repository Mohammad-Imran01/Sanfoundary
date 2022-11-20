#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int ch{}, val{};
    multimap<char, int> mm;
    
    mm.insert(pair<char, int>('x', 100));
    mm.insert(pair<char, int>('y', 200));
    mm.insert(pair<char, int>('y', 300));
    mm.insert(pair<char, int>('y', 400));
    mm.insert(pair<char, int>('z', 500));
    mm.insert(pair<char, int>('z', 500));

    cout << "Size of the multimap: " << mm.size() << endl
        << "showing multimap data: \n";
    for(auto i = mm.begin(); i != mm.end(); i++) {
        cout << (*i).first << " => " << (*i).second << endl;
    }
    for(char c = 'x'; c <= 'z'; c++) {
        cout << "There are " << mm.count(c) << " elements "
            << c << " : ";
        for(auto i = mm.equal_range(c).first; i != mm.equal_range(c).second; i++) {
            cout << ' ' << (*i).second;
            cout << '\n';
        }
    }
    auto i = mm.find('x');
    mm.erase(i);

    cout << "Size of the multimap: " << mm.size() << endl;
    cout << "Multimap contains: \n";
    for(auto i = mm.begin(); i != mm.end(); i++) {
        cout << (*i).first << " => " << (*i).second << '\n';
    }
     
    return EXIT_SUCCESS;
    
}