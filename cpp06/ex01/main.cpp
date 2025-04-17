#include "Serializer.hpp"

int main()
{
    Data data;
    data.x = 42;

    std::cout << "Untouched data: " << data.x << std::endl;

    uintptr_t serializedData = Serializer::serialize(&data);
    std::cout << "Serialized data: " << serializedData << std::endl;

    Data* deserializedData = Serializer::deserialize(serializedData);
    std::cout << "Deserialized data: " << deserializedData->x << std::endl;

    return 0;
}