#include <iostream>
#include <string>
int main()
{
    std::string firstName="Raymond ";
    std::string lastName="Nguyen";
    std::string fullName=firstName.append(lastName);
    std::cout<<fullName;
    return 0;
}
