#pragma once

#include <cmath>
#include <pbr/tools/assert.h>

namespace pbr
{
class Vector4f
{
public:
    explicit Vector4f( const float& i_element0,
                       const float& i_element1,
                       const float& i_element2,
                       const float& i_element3 )
        : m_elements{i_element0, i_element1, i_element2, i_element3}
    {
        PBR_ASSERT( !HasNans() );
    }

    float& operator[]( size_t i_index )
    {
        return m_elements[ i_index ];
    }

    const float& operator[]( size_t i_index ) const
    {
        return m_elements[ i_index ];
    }

    Vector4f operator+( const Vector4f& i_vector )
    {
        return Vector4f( m_elements[ 0 ] + i_vector.m_elements[ 0 ],
                         m_elements[ 1 ] + i_vector.m_elements[ 1 ],
                         m_elements[ 2 ] + i_vector.m_elements[ 2 ],
                         m_elements[ 3 ] + i_vector.m_elements[ 3 ] );
    }

    Vector4f& operator+=( const Vector4f& i_vector )
    {
        m_elements[ 0 ] += i_vector.m_elements[ 0 ];
        m_elements[ 1 ] += i_vector.m_elements[ 1 ];
        m_elements[ 2 ] += i_vector.m_elements[ 2 ];
        m_elements[ 3 ] += i_vector.m_elements[ 3 ];
        return *this;
    }

    Vector4f operator-( const Vector4f& i_vector )
    {
        return Vector4f( m_elements[ 0 ] - i_vector.m_elements[ 0 ],
                         m_elements[ 1 ] - i_vector.m_elements[ 1 ],
                         m_elements[ 2 ] - i_vector.m_elements[ 2 ],
                         m_elements[ 3 ] - i_vector.m_elements[ 3 ] );
    }

    Vector4f& operator-=( const Vector4f& i_vector )
    {
        m_elements[ 0 ] -= i_vector.m_elements[ 0 ];
        m_elements[ 1 ] -= i_vector.m_elements[ 1 ];
        m_elements[ 2 ] -= i_vector.m_elements[ 2 ];
        m_elements[ 3 ] -= i_vector.m_elements[ 3 ];
        return *this;
    }

    Vector4f operator*( const float& i_scalar )
    {
        return Vector4f( m_elements[ 0 ] * i_scalar,
                         m_elements[ 1 ] * i_scalar,
                         m_elements[ 2 ] * i_scalar,
                         m_elements[ 3 ] * i_scalar );
    }

    Vector4f& operator*=( const float& i_scalar )
    {
        m_elements[ 0 ] *= i_scalar;
        m_elements[ 1 ] *= i_scalar;
        m_elements[ 2 ] *= i_scalar;
        m_elements[ 3 ] *= i_scalar;
        return *this;
    }

    Vector4f operator/( const float& i_scalar )
    {
        return Vector4f( m_elements[ 0 ] / i_scalar,
                         m_elements[ 1 ] / i_scalar,
                         m_elements[ 2 ] / i_scalar,
                         m_elements[ 3 ] / i_scalar );
    }

    Vector4f& operator/=( const float& i_scalar )
    {
        m_elements[ 0 ] /= i_scalar;
        m_elements[ 1 ] /= i_scalar;
        m_elements[ 2 ] /= i_scalar;
        m_elements[ 3 ] /= i_scalar;
        return *this;
    }

    bool HasNans() const
    {
        return std::isnan( m_elements[ 0 ] ) || std::isnan( m_elements[ 1 ] ) || std::isnan( m_elements[ 2 ] ) ||
               std::isnan( m_elements[ 3 ] );
    }

private:
    float m_elements[ 4 ] = {0.0f, 0.0f, 0.0f, 0.0f};
};
} // namespace pbr