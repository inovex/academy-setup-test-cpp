#include "gtest/gtest.h"

#include "App.h"

TEST(AppTest, Greetings)
{
  auto app = new App();

  auto greeting = app->getGreeting();

  ASSERT_EQ("Hello World!", greeting);
}
