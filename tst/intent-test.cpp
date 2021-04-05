#include "gtest/gtest.h"
#include "intent.h"

//Predefined intent test suite
TEST(Test, test1) {

EXPECT_EQ (intent::recognizer ("What is the weather like today?"),  ("weather"));
EXPECT_EQ (intent::recognizer ("What is the weather like in Paris today?"),  ("weather city"));
EXPECT_EQ (intent::recognizer ("What is the weather like in New York today?"),  ("weather city"));
EXPECT_EQ (intent::recognizer ("Am I free at 13:00 PM tomorrow?"),  ("calender"));
EXPECT_EQ (intent::recognizer ("Tell me an interesting fact."),  ("fact"));
}
TEST(Test, test2) {
//Additional testcases
EXPECT_EQ (intent::recognizer ("how is the weather today?"),  ("weather"));
EXPECT_EQ (intent::recognizer ("What is the weather like tomorrow?"),  ("weather"));
EXPECT_EQ (intent::recognizer ("What is the weather like in berlin today?"),  ("weather city"));
EXPECT_EQ (intent::recognizer ("What is the weather like in Stuttgart today?"),  ("weather city"));
EXPECT_EQ (intent::recognizer ("Are you free at 15:00 AM tomorrow?"),  ("calender"));
EXPECT_EQ (intent::recognizer ("How are you?"),  ("not found"));


}
