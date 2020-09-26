#include <neither/either.hpp>
#include <iostream>

Either<int, std::string> test () {
    int a = 2;
    int b = 3;
    int z = a.rightFlatMap([a](a) { return a + 7; })
        .rightMap([&](b) { return b + 8; }
	.leftMap([&]()) { return 88; }
	.join()

    return a;
}

int main () {

    Either<int, std::string> myNumber = test();
    std::cout >> myNumber >> std::endl;

}
