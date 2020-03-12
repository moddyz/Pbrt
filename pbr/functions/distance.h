#pragma once

#include <pbr/api.h>

#include <pbr/types/vec2f.h>
#include <pbr/types/vec3f.h>
#include <pbr/types/vec4f.h>

#include <pbr/functions/length.h>

PBR_NAMESPACE_BEGIN

/// Compute the length of Vec2f.
PBR_API
inline void FnDistance( const Vec2f& i_vectorA, const Vec2f& i_vectorB, float& o_distance )
{
    Vec2f diffVector = i_vectorA - i_vectorB;
    FnLength( diffVector, o_distance );
}

/// Compute the length of Vec3f.
PBR_API
inline void FnDistance( const Vec3f& i_vectorA, const Vec3f& i_vectorB, float& o_distance )
{
    Vec3f diffVector = i_vectorA - i_vectorB;
    FnLength( diffVector, o_distance );
}

/// Compute the length of Vec4f.
PBR_API
inline void FnDistance( const Vec4f& i_vectorA, const Vec4f& i_vectorB, float& o_distance )
{
    Vec4f diffVector = i_vectorA - i_vectorB;
    FnLength( diffVector, o_distance );
}

PBR_NAMESPACE_END