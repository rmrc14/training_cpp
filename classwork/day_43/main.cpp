//#include <vector>
//#include <iostream>
//int main() {
//	std::vector<int> vec = { 1, 2, 3, 4, 5 };
//	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
//		std::cout << *it << ' ';
//	}
//	return 0;
//}

#include <iostream>
#include <iterator>
#include <vector>
int main() {
	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	// Using Input Iterator
	for (std::istream_iterator<int> it(std::cin), end; it!= end; ++it)  // till ctrl+Z eof
	{
		std::cout << *it << ' ';
	}

	// Using Output Iterator
	std::copy(vec.begin(), vec.end(),std::ostream_iterator<int>(std::cout, " "));
	return 0;
}