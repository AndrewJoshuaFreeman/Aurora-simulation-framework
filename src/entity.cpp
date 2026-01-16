#include <entity.h>
#include <iostream>

std::ostream& operator<<( std::ostream& os, const Entity& e ){
    return os << e.id().value;
}
