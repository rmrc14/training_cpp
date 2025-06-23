
#include "parse.h"



int main()
{



	try
	{
		ParseCdr p("test.txt");
		p.parse();
		
		p.displayCdrQueu();
		
		
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::string er = e.what();
		
	}





	std::cout << "end of program";


	return 0;
}