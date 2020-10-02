#include <boost/pfr.hpp>
#include <boost/utility/string_view.hpp>
#include <iostream>
#include <string>

namespace the_wild
{
    struct animal
    {
        std::string        name;
        std::string_view   species;
        boost::string_view temperament;
    };
    BOOST_PFR_PRECISE_FUNCTIONS_FOR(animal)
}   // namespace the_wild

const auto fido = the_wild::animal { "fido", "lupus lupus", "aloof" };

int
main()
{
    std::cout << fido << '\n';
}