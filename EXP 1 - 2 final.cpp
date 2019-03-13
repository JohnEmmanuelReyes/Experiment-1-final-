#include <iostream>
using namespace std;

int main()
{
	double mass, density, volume;
	cout <<" Input the mass, in grams, and in density, in grams per cubic centimeters, and outputs the volume of the object. " << endl;
	
	cout <<"Input Mass" << endl;
	cin >> mass;
	cout <<"Input density" << endl; 
	cin >> density; 

	volume = mass / ( 4 * density ); 
	 
	cout <<"Volume= "<< volume <<"cm^3"<< endl; 


		
		



	system("pause");
		return 0;
}

