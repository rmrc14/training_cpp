#include <iostream>

using namespace std;
int display();

int main() {

	int ret = display();
	//int flag = true;

	while (true)
	{

		switch (ret) {
		case 1:
			cout << "addition" << endl;
			break;
		case 2:
			cout << "subtraction " << endl;
			break;
		case 3:
			cout << "multiplication " << endl;
			break;
		case 0:
			cout << "exiting the application";
			goto END;
			break;
		default:
			cout << "not found" << endl;
			break;

		}
		//if (flag == false)
		   // break;

	}
END:
	cout << "program ended successfully" << endl;

	return 0;

}


/*int v1 = 10;     example of labels GOTO statements
if (v1 = 10)
	goto END;
else
	cout << "the content";
END:
	cout << "outside if block";
	return 0;*/





int display()
{
	int ch;
	cout << "1 addition " << endl;
	cout << "2 subtraction " << endl;
	cout << "3 multiplication " << endl;
	cin >> ch;
	return ch;



}



/*
int main()
{
	string genre;
	cout << "enter the genre: " << endl;
	cin >> genre;
	if (genre[0] >= 48 && genre[0] <= 97 && genre[0] == '=')
	{
		cout << "genre cant start with numeric" << endl;
		return 0;
	}
	else if (genre.compare("action") == 0)
		cout << "selected genre is action " << endl;
	else if ((genre.compare("comedy") == 0) || (genre.compare("Comedy") == 0))
		cout << "selected genre is comedy " << endl;
	else if (genre.compare("mystery") == 0)
		cout << "selected genre is mystery " << endl;
	else
		cout << "genre is not present" << endl;
	return 0;

}*/






/*
int main() {
	int amtInHand;
	cout << "enter the amount in Hand:"<<endl;
	cin >> amtInHand;


	if (amtInHand < 10)
		cout << "please get more amt" << endl;
	else if (amtInHand >= 10 and amtInHand < 50)
		cout << "i can order tea" << endl;
	else if (amtInHand >= 50 and amtInHand < 100)
		cout << "i can order roti" << endl;
	else if (amtInHand > 100 and amtInHand < 500)
		cout << "i can order meals" << endl;
	else
		cout << "order anything"<<endl;

	cout << "end of program" << endl;
	return 0;

}


*/






/*"
enum food {
	pongal ,lemonrice ,chickencurry,eggrice
};
enum days {
	mon,tue,wed,thu,fri,sat,sun
};

/*
enum genre {  //it enhance the readability of the code as the value only needed to be updated not the switch case
	Action,
	Comedy,
	Thriller,
	Scifi

};

enum inputLang {

	tamil, english, marathi , telugu, malayalam,kannada
};


int main() {

	int food, days;


	cout << "enter the day :";
	cin >> days;
	switch (days) {
	default:
		cout << "there are only 7 days ina week";
		break;
	case mon:
		cout << "it is mon" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	case tue:
		cout << "it is tue" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	case wed:
		cout << "it is wed" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	case thu:
		cout << "it is thu" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	case fri:
		cout << "it is fri" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	case sat:
		cout << "it is sat" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	case sun:
		cout << "it is sun" << endl;
		cout << "enter the food choice";
		cin >> food;
		switch (food) {

		default:
			cout << "enter food index is not defined ::" << endl;
			break;
		case pongal:
			cout << "choosen food is pongal" << endl;
			break;
		case lemonrice:
			cout << "choosen food is lemonrice" << endl;
			break;
		case chickencurry:
			cout << "choosen food is chickencurry" << endl;
			break;
		case eggrice:
			cout << "choosen food is eggrice" << endl;
			break;

		}
		break;
	}



	/*"
	//example of nested switch()
	int  inputLang;
	char type[20];
	//char genre [20]
	int inputGenre;
	//display();
	cout << "enter the language option";
	cin >> inputLang;
	switch (inputLang) {
	case english:
		cout << "you have choosen the lang : english" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre) // the value is assigned a name
		{
		default:
			cout << "not defined genre..";
			break;
		case Action:
			cout << "choosed genre :  Action " << endl;
			break;
		case Comedy:
			cout << "choosed genre : Comedy " << endl;
			break;
		case Thriller:
			cout << "choosed genre : Thriller " << endl;
			break;
		case Scifi:
			cout << "choosed genre : Scifi " << endl;
			break;


		}
		break;
	case marathi:
		cout << "you have choosen the lang : marathi" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre) // the value is assigned a name
		{
		default:
			cout << "not defined genre..";
			break;
		case Action:
			cout << "choosed genre :  Action " << endl;
			break;
		case Comedy:
			cout << "choosed genre : Comedy " << endl;
			break;
		case Thriller:
			cout << "choosed genre : Thriller " << endl;
			break;
		case Scifi:
			cout << "choosed genre : Scifi " << endl;
			break;


		}
		break;
	case telugu:
		cout << "you have choosen the lang : telugu" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre) // the value is assigned a name
		{
		default:
			cout << "not defined genre..";
			break;
		case Action:
			cout << "choosed genre :  Action " << endl;
			break;
		case Comedy:
			cout << "choosed genre : Comedy " << endl;
			break;
		case Thriller:
			cout << "choosed genre : Thriller " << endl;
			break;
		case Scifi:
			cout << "choosed genre : Scifi " << endl;
			break;


		}
		break;

	case malayalam:
		cout << "you have choosen the lang : malayalam" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre) // the value is assigned a name
		{
		default:
			cout << "not defined genre..";
			break;
		case Action:
			cout << "choosed genre :  Action " << endl;
			break;
		case Comedy:
			cout << "choosed genre : Comedy " << endl;
			break;
		case Thriller:
			cout << "choosed genre : Thriller " << endl;
			break;
		case Scifi:
			cout << "choosed genre : Scifi " << endl;
			break;


		}
		break;
	case kannada:
		cout << "you have choosen the lang : kannada" << endl;
		cout << "enter the genre:";
		cin >> inputGenre;
		switch (inputGenre) // the value is assigned a name
		{
		default:
			cout << "not defined genre..";
			break;
		case Action:
			cout << "choosed genre :  Action " << endl;
			break;
		case Comedy:
			cout << "choosed genre : Comedy " << endl;
			break;
		case Thriller:
			cout << "choosed genre : Thriller " << endl;
			break;
		case Scifi:
			cout << "choosed genre : Scifi " << endl;
			break;


		}
		break;

	default :
		cout << "not found" << endl;
		break;

	}




	return 0;
}
*/