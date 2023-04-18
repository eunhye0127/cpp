#include <iostream>
#include <string>

class Person
{
public:
    // 생성자
    Person(std::string name, int age)
        : m_name(name), m_age(age)
    {}

    // 접근자 함수
    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }

    // 설정자 함수
    void setName(std::string name) { m_name = name; }
    void setAge(int age) { m_age = age; }

private:
    std::string m_name; // 이름
    int m_age; // 나이
};

int main()
{
    Person person("John", 30);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    person.setName("Alice");
    person.setAge(25);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    return 0;
}
