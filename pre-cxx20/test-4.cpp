#include <boost/pfr.hpp>
#include <boost/utility/string_view.hpp>
#include <iostream>
#include <string>
#include <vector>

namespace the_wild
{
    struct animal
    {
        std::string const &name;
        std::string_view   species;
        boost::string_view temperament;
    };

    struct family
    {
        std::vector<animal> members;
    };
}   // namespace the_wild

const std::string fido_name = "fido";

const auto fido = the_wild::animal { fido_name, "lupus lupus", "aloof" };
const auto f = the_wild::family { std::vector<the_wild::animal> { fido }};

int
main()
{
    using namespace boost::pfr::ops;
    std::cout << f << '\n';
}