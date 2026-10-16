#include <iostream>
#include "Header.h"
using namespace std;

Student operator++(Student& obj, int)
{
    Student temp = obj;
    obj.SetYearOfStudy(obj.GetYearOfStudy() + 1);
    return temp;
}

Student& operator--(Student& obj)
{
    
    obj.SetYearOfStudy(obj.GetYearOfStudy() - 1);
    return obj;
}

Student& operator+=(Student& obj, int value)
{
    obj.SetAge(obj.GetAge() + value);
    return obj;
}

Student& operator-=(Student& obj, int value)
{
    
    obj.SetAge(obj.GetAge() - value);
    return obj;
}

int main()
{
    Student obj1("Eva", 17, 2); 
    obj1.Output();
    
    --obj1;
    obj1.Output();
    
    obj1 -= 5;
    obj1.Output();

    return 0;
}
