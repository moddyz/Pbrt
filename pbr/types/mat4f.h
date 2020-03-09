#pragma once

#include <cmath>
#include <cstring>
#include <pbr/api.h>
#include <pbr/tools/assert.h>

PBR_NAMESPACE_BEGIN

class PBR_API DtMat4f final
{
public:
    using ElementType = float;

    static size_t GetElementSize()
    {
        return 16;
    }

    DtMat4f()  = default;
    ~DtMat4f() = default;

    explicit DtMat4f( const float& i_element0,
                      const float& i_element1,
                      const float& i_element2,
                      const float& i_element3,
                      const float& i_element4,
                      const float& i_element5,
                      const float& i_element6,
                      const float& i_element7,
                      const float& i_element8,
                      const float& i_element9,
                      const float& i_element10,
                      const float& i_element11,
                      const float& i_element12,
                      const float& i_element13,
                      const float& i_element14,
                      const float& i_element15 )
        : m_elements{i_element0,
                     i_element1,
                     i_element2,
                     i_element3,
                     i_element4,
                     i_element5,
                     i_element6,
                     i_element7,
                     i_element8,
                     i_element9,
                     i_element10,
                     i_element11,
                     i_element12,
                     i_element13,
                     i_element14,
                     i_element15}
    {
        PBR_ASSERT( !HasNans() );
    }

    DtMat4f( const DtMat4f& i_matrix )
    {
        PBR_ASSERT( !HasNans() );
        std::memcpy( ( void* ) m_elements, ( const void* ) i_matrix.m_elements, sizeof( m_elements ) );
    }

    DtMat4f& operator=( const DtMat4f& i_matrix )
    {
        PBR_ASSERT( !HasNans() );
        std::memcpy( ( void* ) m_elements, ( const void* ) i_matrix.m_elements, sizeof( m_elements ) );
        return *this;
    }

    float& operator[]( size_t i_index )
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ i_index ];
    }

    const float& operator[]( size_t i_index ) const
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ i_index ];
    }

    float& operator()( size_t i_row, size_t i_column )
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ ( i_row * 4 ) + i_column ];
    }

    const float& operator()( size_t i_row, size_t i_column ) const
    {
        PBR_ASSERT( !HasNans() );
        return m_elements[ ( i_row * 4 ) + i_column ];
    }

    bool HasNans() const
    {
        return std::isnan( m_elements[ 0 ] ) || std::isnan( m_elements[ 1 ] ) || std::isnan( m_elements[ 2 ] ) ||
               std::isnan( m_elements[ 3 ] ) || std::isnan( m_elements[ 4 ] ) || std::isnan( m_elements[ 5 ] ) ||
               std::isnan( m_elements[ 6 ] ) || std::isnan( m_elements[ 7 ] ) || std::isnan( m_elements[ 8 ] ) ||
               std::isnan( m_elements[ 9 ] ) || std::isnan( m_elements[ 10 ] ) || std::isnan( m_elements[ 11 ] ) ||
               std::isnan( m_elements[ 12 ] ) || std::isnan( m_elements[ 13 ] ) || std::isnan( m_elements[ 14 ] ) ||
               std::isnan( m_elements[ 15 ] );
    }

private:
    float m_elements[ 16 ] =
        {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
};
PBR_NAMESPACE_END
