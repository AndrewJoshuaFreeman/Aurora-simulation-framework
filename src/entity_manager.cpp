//entity_manager.cpp
#include "../include/entity_manager.h"

Entity& EntityManager::createEntity(){

    EntityId id{m_nextId++};
    m_entities.emplace_back(id);//like push_back!
    
    return m_entities.back();//last

}

const std::vector<Entity>& EntityManager::entities() const noexcept{
    return m_entities;
}
