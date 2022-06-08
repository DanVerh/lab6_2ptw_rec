#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Functions.hpp"

TEST_CASE( "Arguments initialized") {
    Elem* first = nullptr, *last = nullptr;
    init(first, last, 0);
    init(first, last, 1);
    init(first, last, 1);
    REQUIRE( Count(first,1) == 2 );
}
