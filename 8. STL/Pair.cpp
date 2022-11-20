#include <iostream>
int main() {
    std::pair<std::string, int> product1{"Fruits", 52} ;
    std::pair<std::string, int> product2 ;
    std::pair<std::string, int> product3 ;

    product2 = product1;

    product1.first = "Shirts";
    product1.second = 13;

    product3 = std::make_pair("Grapes", 89);

    std::cout  << product1.first << " : "
               << product1.second << '\n'
               << product2.first << " : "
               << product2.second << '\n'
               << product3.first << " : "
               << product3.second << '\n' ;
    return 0;

}