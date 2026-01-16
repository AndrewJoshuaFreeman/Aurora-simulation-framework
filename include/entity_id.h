#pragma once
#include <cstdint>//for fixed width int types on different archs

//just a number, however, now cant accidentally pass a HealthId/int
//zero runtime cost
struct EntityId {

    /* constexpr allows contruction at compile time and had better optimizer opportunities
     * explicit prevents unwanted implict type conversions: EntityId id = 42
     */
    constexpr explicit EntityId( std::uint32_t value ) noexcept : value{value} {}

    //operator== overload, default
    constexpr bool operator==( const EntityId& ) const noexcept = default;

    std::uint32_t value{};

};
