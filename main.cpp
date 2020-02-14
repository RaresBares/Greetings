#include <iostream>

int main()
{
    const char* myname = "Rares";
    int age = 14;
    int& age_ref = age;
    std::cout << "Hello, "<< myname << "!\n";
    std::cout << "You are " << age_ref << " years old?\n";
    //aaab
    std::cout << "End";
}
