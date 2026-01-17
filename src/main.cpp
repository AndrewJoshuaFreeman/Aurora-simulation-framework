//main.cpp
#include "../include/entity_manager.h"
#include <iostream>

int main(){

    EntityManager manager;

    manager.createEntity();
    manager.createEntity();
    manager.createEntity();

    for( const auto& e : manager.entities() ){
        std::cout << "Entity: " << e << '\n';
    }


return 0;
}
