/*#include <iostream>
#include <string>
int main()
{
    std::string numOne="20";
    std::string numTwo="23";
    std::string numThree=numOne+numTwo;
    std::cout<<numThree;
    return 0;
}*/
/*#include <iostream>
int main()
{
    int numOne=20;
    int numTwo=23;
    int numThree=numOne+numTwo;
    std::cout<<numThree;
    return 0;
}*/
/*#include <iostream>
#include <string>
int main()
{
    std::string sentenceOne="Today is Monday.";
    std::string sentenceTwo="And this is my 8th lesson.";
    std::string full=sentenceOne+" "+sentenceTwo;
    std::cout<<full;
    return 0;
}*/
/*#include <iostream>
#include <string>
int main()
{
std::string word="extraordinary";
std::cout<<"The word "<<word<<" is "<<word.length()<<" letters long.";
}*/
/*#include <iostream>
#include <string>
int main()
{
std::string word="extraordinary";
std::cout<<"The word "<<word<<" is "<<word.size()<<" letters long.";
}*/
/*#include <iostream>
#include <string>
int main()
{
    std::string word="C++ was designed with systems programming and embedded, resource-constrained software and large systems in mind, with performance, efficiency, and flexibility of use as its design highlights.[14] C++ has also been found useful in many other contexts, with key strengths being software infrastructure and resource-constrained applications,[14] including desktop applications, video games, servers (e.g. e-commerce, web search, or databases), and performance-critical applications";
    std::cout<<word[150]
}*/
#include <iostream>
#include <string>
int main()
{
    std::string fullName;
    std::cout<<"What is your full name. ";
    getline(std::cin,fullName);
    std::cout<<"Your full name is "<<fullName<<".";
    return 0;
}

