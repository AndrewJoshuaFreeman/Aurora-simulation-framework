//main.cpp
#include "../include/entity.h"
#include <vector>

int main(){

    std::vector<Entity> entities;

    entities.push_back( Entity{EntityId{0}} );

    std::cout << "Entity: " << entities[0] << '\n';

return 0;
}
