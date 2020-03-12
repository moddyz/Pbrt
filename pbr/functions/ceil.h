#pragma once

#include <pbr/api.h>

#include <pbr/types/vec2f.h>
#include <pbr/types/vec2i.h>
#include <pbr/types/vec3f.h>
#include <pbr/types/vec3i.h>
#include <pbr/types/vec4f.h>
#include <pbr/types/vec4i.h>

#include <cmath>

PBR_NAMESPACE_BEGIN

/// Compute the ceiling of the input value, by rounding upwards, returning the smallest integral value greater than the
/// input. If the value type is a vector, the ceiling will be operated element-wise.

PBR_API
inline void FnCeil( const int& i_value, int& o_ceiled )
{
    o_ceiled = std::ceil( i_value );
}

PBR_API
inline void FnCeil( const float& i_value, float& o_ceiled )
{
    o_ceiled = std::ceil( i_value );
}

PBR_API
inline void FnCeil( const Vec2f& i_value, Vec2f& o_ceiled )
{
    o_ceiled[ 0 ] = std::ceil( i_value[ 0 ] );
    o_ceiled[ 1 ] = std::ceil( i_value[ 1 ] );
}

PBR_API
inline void FnCeil( const Vec3f& i_value, Vec3f& o_ceiled )
{
    o_ceiled[ 0 ] = std::ceil( i_value[ 0 ] );
    o_ceiled[ 1 ] = std::ceil( i_value[ 1 ] );
    o_ceiled[ 2 ] = std::ceil( i_value[ 2 ] );
}

PBR_API
inline void FnCeil( const Vec4f& i_value, Vec4f& o_ceiled )
{
    o_ceiled[ 0 ] = std::ceil( i_value[ 0 ] );
    o_ceiled[ 1 ] = std::ceil( i_value[ 1 ] );
    o_ceiled[ 2 ] = std::ceil( i_value[ 2 ] );
    o_ceiled[ 3 ] = std::ceil( i_value[ 3 ] );
}

PBR_API
inline void FnCeil( const Vec2i& i_value, Vec2i& o_ceiled )
{
    o_ceiled[ 0 ] = std::ceil( i_value[ 0 ] );
    o_ceiled[ 1 ] = std::ceil( i_value[ 1 ] );
}

PBR_API
inline void FnCeil( const Vec3i& i_value, Vec3i& o_ceiled )
{
    o_ceiled[ 0 ] = std::ceil( i_value[ 0 ] );
    o_ceiled[ 1 ] = std::ceil( i_value[ 1 ] );
    o_ceiled[ 2 ] = std::ceil( i_value[ 2 ] );
}

PBR_API
inline void FnCeil( const Vec4i& i_value, Vec4i& o_ceiled )
{
    o_ceiled[ 0 ] = std::ceil( i_value[ 0 ] );
    o_ceiled[ 1 ] = std::ceil( i_value[ 1 ] );
    o_ceiled[ 2 ] = std::ceil( i_value[ 2 ] );
    o_ceiled[ 3 ] = std::ceil( i_value[ 3 ] );
}

PBR_NAMESPACE_END