#include <boost/pfr.hpp>
#include <boost/utility/string_view.hpp>
#include <string>
#include <iostream>

namespace the_wild
{
    struct animal
    {
        std::string name;
        std::string_view   species;
        boost::string_view temperament;
    };

    struct numbers
    {
        int a;
        char b;
        float c;
    };

}   // namespace the_wild

const std::string fido_name = "fido";

const auto fido = the_wild::animal { fido_name, "lupus lupus", "aloof" };
const auto n = the_wild::numbers { 10, 'a', 11.1 };
int
main()
{
    auto& [a, b, c] = boost::pfr::flat_structure_tie(n);
    std::cout << a << std::endl;
}