#include <nlohmann/json.hpp>

#include <iostream>

int main()
{
    using json = nlohmann::json;

    json j;
    j["hello"] = "world";

    std::cout << j << std::endl;

    return 0;
}
