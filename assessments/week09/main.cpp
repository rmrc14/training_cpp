

#include"CoreHeader.h"
#include "Parse_CDR.h"
#include "Logger.h"


int main()
{
	//Logger loging("log.txt");


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
		//loging.log(FATAL,er);
	}
	

	std::cout << "end of program";


	return 0;
}