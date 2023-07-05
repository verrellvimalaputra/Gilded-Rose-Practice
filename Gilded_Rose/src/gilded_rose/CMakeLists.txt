
add_library(gilded_rose STATIC
        "GildedRose.cpp"
        "GildedRose.h"
        "Item.cpp"
        "Item.h"
        "Normal.cpp"
        "Normal.h"
        "Maturing.cpp"
        "Maturing.h"
        "Expiring.cpp"
        "Expiring.h"
        "Conjured.cpp"
        "Conjured.h"
        "Legendary.cpp"
        "Legendary.h"
        ItemCreator.cpp ItemCreator.h ConcreteItemCreator.cpp ConcreteItemCreator.h)
target_include_directories(gilded_rose PUBLIC .)

# unit tests
add_executable(OOAD_Gilded_Rose_Tests
        "GildedRoseUnitTests.cpp"
        ItemCreator.cpp ItemCreator.h ConcreteItemCreator.cpp ConcreteItemCreator.h)
target_link_libraries(OOAD_Gilded_Rose_Tests
        PRIVATE gtest_main gilded_rose
        )
add_test(NAME gilded_rose COMMAND OOAD_Gilded_Rose_Tests)

# app
add_executable(OOAD_Gilded_Rose
        "main.cpp"
        ItemCreator.cpp ItemCreator.h ConcreteItemCreator.cpp ConcreteItemCreator.h)
target_link_libraries(OOAD_Gilded_Rose
        PRIVATE gilded_rose
        )
