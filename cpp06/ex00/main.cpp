#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    ScalarConverter::convert(input);

    return 0;
}