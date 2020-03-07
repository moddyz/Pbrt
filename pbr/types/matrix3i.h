#pragma once

#include <cmath>
#include <cstring>
#include <pbr/tools/assert.h>

namespace pbr
{
class Matrix3i
{
public:
    explicit Matrix3i( const int& i_element0,
                       const int& i_element1,
                       const int& i_element2,
                       const int& i_element3,
                       const int& i_element4,
                       const int& i_element5,
                       const int& i_element6,
                       const int& i_element7,
                       const int& i_element8 )
        : m_elements{i_element0,
                     i_element1,
                     i_element2,
                     i_element3,
                     i_element4,
                     i_element5,
                     i_element6,
                     i_element7,
                     i_element8}
    {
        PBR_ASSERT( !HasNans() );
    }

    Matrix3i( const Matrix3i& i_matrix )
    {
        PBR_ASSERT( !HasNans() );
        std::memcpy( ( void* ) m_elements, ( const void* ) i_matrix.m_elements, sizeof( m_elements ) );
    }

    Matrix3i& operator=( const Matrix3i& i_matrix )
    {
        PBR_ASSERT( !HasNans() );
        std::memcpy( ( void* ) m_elements, ( const void* ) i_matrix.m_elements, sizeof( m_elements ) );
        return *this;
    }

    int& operator[]( size_t i_index )
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ i_index ];
    }

    const int& operator[]( size_t i_index ) const
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ i_index ];
    }

    int& operator()( size_t i_row, size_t i_column )
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ ( i_row * 3 ) + i_column ];
    }

    const int& operator()( size_t i_row, size_t i_column ) const
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ ( i_row * 3 ) + i_column ];
    }

    bool HasNans() const
    {
        PBR_ASSERT( !HasNans() );
        return std::isnan( m_elements[ 0 ] ) || std::isnan( m_elements[ 1 ] ) || std::isnan( m_elements[ 2 ] ) ||
               std::isnan( m_elements[ 3 ] ) || std::isnan( m_elements[ 4 ] ) || std::isnan( m_elements[ 5 ] ) ||
               std::isnan( m_elements[ 6 ] ) || std::isnan( m_elements[ 7 ] ) || std::isnan( m_elements[ 8 ] );
    }

private:
    int m_elements[ 9 ] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
};
} // namespace pbr
