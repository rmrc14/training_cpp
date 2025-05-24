#include<iostream>

using namespace std;


int main()
{// calculate the aggreagte and percwntage 
	int s1,s2, s3, s4, s5,per;
	cout << "enter the marks of 5 subjects" << endl;
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	per = s1 + s2 + s3 + s4 + s5;
	cout << "the agregate marks sum = " <<per <<endl;


	per = (per / 5);

	cout << "percentage= " << per<<"%";

/*
int main(){
	
	int a, b;
	cout << "enter the 2 variables" << endl;
	cin>>a>> b;
	cout << "a=" << a << "b=" << b;

	a = a + b;   // swapping two no without third variables
	b = a - b;
	a = a - b;
	cout << "a=" << a << "b=" << b;


	*/







/*
int main(){
	const int pi = 3.145; // to find area of circle
	int r;
	float area;
	cout << "enter the radius";
	cin >> r;

	area = pi * r * r;
	cout << "the area of circle is: "<<area<<endl;
	*/


/*

int main(){

	float selling_price,profit, cost_price=0.0;

	cout << "enter the selling_price and the profit :" << endl;
	cin >> selling_price >> profit;

	cost_price = selling_price - profit;
	cout << "the cost price" << cost_price;
	*/







/*
int main(){
	float basic, rent_aln,dear_all,grosssalary=0.0; //gross salary quest 1 

	cout << " enter the basic salary" << endl;
	cin >> basic;

	rent_aln = basic * (0.04);
	dear_all = basic * (0.02);

	grosssalary = basic+rent_aln + dear_all;
	cout << grosssalary << " is the gross salary";*/




/*
int main()
{
	int n,sum=0,ans=0;
	cout << "enter the no: " << endl;
	cin >> n;

	for (int i = 0; i<n; i++) //adding the digits together 
	{

		sum = n%10;
		ans += sum;
		n /= 10;
	
	}

	cout << ans;
	*/


/*
int main()
{
	int i=1, n;
	cout << "enter n"<<endl;
	cin >> n;
	n = n * n;
	
	while (i <= n)
	{
		//cout << i ;
		if (i % 5 == 0)
			cout <<i<< endl;
		else
			cout <<i<< "*";

		i++;
	}

	*/





	/*int itr1 = 1, contr, n;

	cout << "enter the number"<<endl;
	cin >> n;

	while (itr1<n)
	{
		cout << (itr1 * itr1) + 1<<",";
		itr1++;

	}

	cout << (itr1 * itr1) + 1;*/


	 
	/*
	int ;
	cout << "enter the value to be printed" << endl;
	cin >> i;

	
	while (i!=0)
	{ 
		cout << j<<",";
		while (k = true)
		{


		}

		if (j % 2 != 0 && val2 % m == 0)
			continue;
		else
			val2 += j;

		i--;
	}

	*/

	return 0;

}