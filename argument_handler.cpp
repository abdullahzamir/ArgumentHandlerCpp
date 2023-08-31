#include <iostream>
#include <unordered_map>

int main(int argc, char* argv[]) {
    std::unordered_map<std::string, std::string> arguments;

    for (int i = 1; i < argc; i += 2) {
        std::string arg = argv[i]; 
        std::string value = (i + 1 < argc) ? argv[i + 1] : "";
        arguments.insert(std::make_pair(arg, value));
    }

    std::cout << arguments["-a"] << std::endl;
    std::cout << arguments["-b"] << std::endl;
    std::cout << arguments["-c"] << std::endl;
    
    return 0;
}
