

#include"CoreHeader.h"
#include "Parse_CDR.h"
#include "Logger.h"
#include "ThreadPool.h"
#include "Menu.h"


int main()
{
	Logger loging("log.txt");


	try
	{
		ParseCdr p("data.cdr");
		p.parse();
		loging.log(INFO, "parsed the file : data.cdr");
		p.displayCdrQueu();
		Thread t;
		t.execute(p.getCdrInstr());
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::string er = e.what();
		loging.log(FATAL,er);
	}

	



	std::cout << "end of program";


	return 0;
}