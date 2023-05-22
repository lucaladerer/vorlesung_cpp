#include <iostream>
#include <string>


class Person
{
public:
enum class Nationality
{
    de,
    en,
    it,
    es
};

Person()
{};

Person(std::string name, std::string nationality)
    : m_name(name)
    , m_nationality(nationality)
{};

void getNationality(nationality)
{
    m_nationality = nationality;
};

//____________________________________________________________________________________

std::string getname(greetedPerson.name)
{
    m_name = name;
    return m_name;
}

// void getnationality(Nationality greetedPerson){
//     switch(nationality)
//     {
//         case(Nationality::de):
//             m_greet = "Hallo ";
//             break;
//         case(Nationality::en):
//             m_greet = "Hello ";
//             break;
//         case(Nationality::it):
//             m_greet = "Bungiorno ";
//             break;
//         case(Nationality::es):
//             m_greet = "Buenos dias ";
//             break;
//     };
// }

void greet(Person greetedPerson)
{

    std::cout << m_greet << m_name << std::endl;
};

private:
std::string m_greet;
std::string m_nationality;
std::string m_name;
};

int main_2()
{
    std::cout << "Gib den Namen ein!" << std::endl;
    std::cin >> m_name;
    std::cout << "Gib die Nationalität ein!" << std::endl;
    std::cin >> m_nationality;
    Person greetedPerson;
    // getnationality(nationality);
    return 0;
}