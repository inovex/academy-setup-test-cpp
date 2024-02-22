#include <iostream>

#include "App.h"

int main(int argc, char **argv)
{
  auto app = new App();
  std::cout << app->getGreeting() << std::endl;
}