#include <iostream>
using namespace std;
#include "Film.h"
#include <vector>;

bool MovieLibrary::add_movie(const string& title, const string& rating, int watch_count) {
	for (const Movie& movie : movies) {
		if (movie.get_title() == title) {
			return false;
		}
	}

	Movie new_movie(title, rating, watch_count);
	movies.push_back(new_movie);
	return true;
}


string MovieLibrary::increment_watch_count(const string& title) {
	int count = 0;
	for (Movie& movie : movies) {
		if (movie.get_title() == title) {
			movie.increment_watch();
				return "Film bulundu, izlenme sayisi artirildi.";
		}

		
	}
	return "Film bulunamadi.";
}

void MovieLibrary::display_movies() {
	for (const Movie& movie : movies) {
		cout << "Title:" << movie.get_title() << endl;
		cout << "Rating:" << movie.get_rating() << endl;
		cout << "Watch Count:" << movie.get_watch_count() << endl;
		cout << "-----------------------" << endl;
	}
}

bool MovieLibrary::remove_movie(const string& title) {
	for (auto it = movies.begin(); it != movies.end(); ++it) {
		if (it->get_title() == title) {
			movies.erase(it);
			return true;  // Silindi
		}
	}
	return false;  // Bulunamadý
}

string MovieLibrary::most_watched() {
	int en_yüksek = 0;
	string en_cok_izlenen_film = "yok";
	
	for (const Movie& movie : movies) {
		if (movie.get_watch_count() > en_yüksek) {
			en_yüksek = movie.get_watch_count();
			en_cok_izlenen_film = movie.get_title();
		}
	}
	return en_cok_izlenen_film;
}