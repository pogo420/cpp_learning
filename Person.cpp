#include "include/Person.h"

Person::Person(unsigned age, const char* name)
{
    this->age = age;
    this->name = name;
}

bool Person::IsAdult(){
    if ((this->age) >= THRESHOLD){
        return true;
    }
    else {
        return false;
    }
}

const char* Person::Name(){
    return this->name;
}

