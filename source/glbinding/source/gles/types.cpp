
#include <glbinding/gles/types.h>

#include <glbinding/Meta.h>
#include "../Meta_Maps.h"

#include <bitset>
#include <sstream>

template <typename T, typename T_2>
std::string bitfieldString(T value, const std::unordered_map<T_2, std::string> & map)
{
    using U = typename std::underlying_type<T>::type;

    std::bitset<sizeof(U)*8> bits(static_cast<U>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i<sizeof(U)*8; ++i)
    {
        if (bits.test(i))
        {
            if (first)
            {
                first = false;
            }
            else
            {
                ss << " | ";
            }

            U bit = 1 << i;
            auto it = map.find(static_cast<T_2>(bit));
            if (it == map.end())
            {
                ss << "1 << " << i;
            }
            else
            {
                ss << it->second;
            }
        }
    }

    return ss.str();
}


std::ostream & operator<<(std::ostream & stream, const gles::GLextension & value)
{
    stream << glbinding::Meta::getString(static_cast<gl::GLextension>(value));
    return stream;
}



std::ostream & operator<<(std::ostream & stream, const gles::GLenum & value)
{
    stream << glbinding::Meta::getString(static_cast<gl::GLenum>(value));
    return stream;
}



std::ostream & operator<<(std::ostream & stream, const gles::GLboolean & value)
{
    stream << glbinding::Meta::getString(static_cast<gl::GLboolean>(value));
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const gles::AttribMask & value)
{
    stream << bitfieldString<gles::AttribMask>(value, glbinding::Meta_StringsByAttribMask);
    return stream;
}

namespace glbinding
{

gles::AttribMask operator|(const gles::AttribMask & a, const gles::AttribMask & b)
{
    return static_cast<gles::AttribMask>(static_cast<std::underlying_type<gles::AttribMask>::type>(a) | static_cast<std::underlying_type<gles::AttribMask>::type>(b));
}

gles::AttribMask operator&(const gles::AttribMask & a, const gles::AttribMask & b)
{
    return static_cast<gles::AttribMask>(static_cast<std::underlying_type<gles::AttribMask>::type>(a) & static_cast<std::underlying_type<gles::AttribMask>::type>(b));
}

gles::AttribMask operator^(const gles::AttribMask & a, const gles::AttribMask & b)
{
    return static_cast<gles::AttribMask>(static_cast<std::underlying_type<gles::AttribMask>::type>(a) ^ static_cast<std::underlying_type<gles::AttribMask>::type>(b));
}

}



std::ostream & operator<<(std::ostream & stream, const gles::ClearBufferMask & value)
{
    stream << bitfieldString<gles::ClearBufferMask>(value, glbinding::Meta_StringsByClearBufferMask);
    return stream;
}

namespace glbinding
{

gles::ClearBufferMask operator|(const gles::ClearBufferMask & a, const gles::ClearBufferMask & b)
{
    return static_cast<gles::ClearBufferMask>(static_cast<std::underlying_type<gles::ClearBufferMask>::type>(a) | static_cast<std::underlying_type<gles::ClearBufferMask>::type>(b));
}

gles::ClearBufferMask operator&(const gles::ClearBufferMask & a, const gles::ClearBufferMask & b)
{
    return static_cast<gles::ClearBufferMask>(static_cast<std::underlying_type<gles::ClearBufferMask>::type>(a) & static_cast<std::underlying_type<gles::ClearBufferMask>::type>(b));
}

gles::ClearBufferMask operator^(const gles::ClearBufferMask & a, const gles::ClearBufferMask & b)
{
    return static_cast<gles::ClearBufferMask>(static_cast<std::underlying_type<gles::ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<gles::ClearBufferMask>::type>(b));
}

}
