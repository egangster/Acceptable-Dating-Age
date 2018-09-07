#include <iostream>
#include <tuple>

int main( ) {
	std::cout << "What's your age? ";
	const auto age = [ &in = std::cin ]( ) -> int {
		auto input = 0;
		in >> input;
		return input <= 12 ? -1 : input;
	}( );

	if( age == -1 ) {
		std::cout << "You shouldn't be in the dating game, buddy...";
		return 0;
	}

	const auto[ minAge, maxAge ] = std::tuple( age / 2 + 7, ( age - 7 ) * 2 );
	std::cout << "The socially accepted dating range for you is " <<
		minAge << " to " << maxAge;
}