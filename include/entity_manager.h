//entity_maganer.h
#pragma once

#include "entity.h"
#include <cstdint>
#include <vector>


class EntityManager{

public:
    Entity& createEntity();
    const std::vector<Entity>& entities() const noexcept;

private:
    std::vector<Entity> m_entities;
    std::uint32_t m_nextId{0};

};
