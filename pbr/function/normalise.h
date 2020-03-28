#pragma once

#include <pbr/api.h>

#include <pbr/type/vec2f.h>
#include <pbr/type/vec3f.h>
#include <pbr/type/vec4f.h>

#include <pbr/function/length.h>

PBR_NAMESPACE_BEGIN

/// Compute the normalised version of the input vector.  A normalised vector has a length of 1.0.

PBR_API
inline void Normalise( const Vec2f& i_vector, Vec2f& o_normalised )
{
    float length;
    Length( i_vector, length );
    o_normalised = i_vector / length;
}

PBR_API
inline void Normalise( const Vec3f& i_vector, Vec3f& o_normalised )
{
    float length;
    Length( i_vector, length );
    o_normalised = i_vector / length;
}

PBR_API
inline void Normalise( const Vec4f& i_vector, Vec4f& o_normalised )
{
    float length;
    Length( i_vector, length );
    o_normalised = i_vector / length;
}

PBR_NAMESPACE_END