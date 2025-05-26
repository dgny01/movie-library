#include <iostream>
using namespace std;
#include "Film.h"

int main() {
	MovieLibrary lib;

	if(lib.add_movie("Inception,","PG13", 5)) {
		cout << "Film eklendi.\n";
	}

	else
		cout << "Film zaten var!\n";

	if (lib.add_movie("Inception,", "PG13", 5)) {
		cout << "Film eklendi.\n";
	}

	else
		cout << "Film zaten var!\n";

	lib.display_movies();

	if (lib.remove_movie("Inception,"))
	{
		cout << "film kaldirildi!" << endl;
	}

	else
	{
		cout << "film bulunamadi!" << endl;
	}

	lib.display_movies();

	return 0;
}