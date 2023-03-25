#include <iostream>
#include <thread>
#include <chrono>

class background_task {
public:
	void operator()()const {
		[]() {
			std::cout << "do_something" << std::endl;
		}();

		[]() {
			std::cout << "do_something_else" << std::endl;
		}();
	}
};

int main() 
{
	background_task f;
	std::thread my_thread(f);
	return 0;
}

