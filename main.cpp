#include "include/Person.h"
#include <iostream>

int main(){
    Person p1(23, "Arnab");
    Person p2(13, "Arnab");

    if (p1.IsAdult()){
        printf("Adult\n");
        printf("%s\n",p1.Name());
    }

    return 0;
 
}
