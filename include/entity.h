//entity.h
#pragma once
#include "entity_id.h"
#include <iosfwd>//for std::ostream, iostream is too heavy for this!

class Entity {

public:
    explicit Entity( EntityId id ) noexcept : m_id{id} {}
    
    EntityId id() const noexcept { return m_id; }

private:
    EntityId m_id;

};

std::ostream& operator<<( std::ostream&, const Entity& );
