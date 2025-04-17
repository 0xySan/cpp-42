#include "Serializer.hpp"

Serializer::Serializer() { }

uintptr_t Serializer::serialize(Data* data)
{
    return reinterpret_cast<uintptr_t>(data);
}

Data* Serializer::deserialize(uintptr_t pointer)
{
    return reinterpret_cast<Data*>(pointer);
}