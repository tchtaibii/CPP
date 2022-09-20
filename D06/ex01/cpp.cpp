#include "cpp.hpp"

std::uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<std::uintptr_t>(ptr);
}

Data *deserialize(std::uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}