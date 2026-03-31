#include <iostream>

#include "server.cpp"
#include "client.cpp"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    return 1;
  }

  std::string mode = argv[1];

  if (mode == "server") {
    server();
  } else if (mode == "client") {
    client();
  } else {
    std::cout << "Unknown mode\n";
    return 1;
  }

  return 0;
}
