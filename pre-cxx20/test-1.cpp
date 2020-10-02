#include <boost/pfr.hpp>
#include <boost/utility/string_view.hpp>
#include <iostream>
#include <string>

namespace the_wild
{
    struct animal
    {
        std::string name;
        std::string_view species;
        boost::string_view temperament;
    };
}   // namespace the_wild

const auto fido = the_wild::animal { "fido", "lupus lupus", "aloof" };

int
main()
{
    {   // test1
        using namespace boost::pfr::ops;
        std::cout << fido << '\n';
    }
}