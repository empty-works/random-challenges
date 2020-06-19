/* Implement a job scheduler which takes in 
 * a function f and an integer n, and calls 
 * f after n milliseconds. 
 * */

#include <iostream>
#include <chrono>
#include <thread>

void foo() {
	std::cout << "foo activated" << std::endl;
}

class theScheduler {
	public:
	theScheduler();
	theScheduler(void (*foo)(), int n);
};

theScheduler::theScheduler(void (*foo)(), int n) {
	std::this_thread::sleep_for(std::chrono::milliseconds(n));
	foo();
}

int main() {
	theScheduler sched(foo, 3000);	
	return 0;
}
