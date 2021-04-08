#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"

TEST_CASE( "2: Boundary Cases", "[multi-file:2]" ) {
    REQUIRE( searchNumber(0.0,{},0) == -1 );
}

TEST_CASE( "2: Valid Cases", "[multi-file:2]" ) {
    float test1[4] = {1.0,0.0,4.0,99.0};
    REQUIRE( searchNumber(0.0,test1,4) == 1 );
    REQUIRE( searchNumber(2.0,test1,4) == -1 );
    float test2[5] = {2.0,55.0,88.0,102.0,5.0};
    REQUIRE( searchNumber(88.0,test2,5) == 2);
}
