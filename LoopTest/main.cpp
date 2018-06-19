#include <iostream>
#include TestClass
#include "cmake-build-debug/TestClass.h"

static void TestMethod() {
    std::cout << "Testing methods!" << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    bool quit = false;
    int choice;

    while(!quit) {
        std::cout << "Please select your choice" << std::endl;

        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Testing this shit" << std::endl;
                break;
            case 2:
                std::cout << "What is love?\n";
                break;
            case 3:
                TestMethod();
                break;
            case 0:
                std::cout << "Quit" << std::endl;
                quit = true;
                break;
        }
    }

    return 0;
}