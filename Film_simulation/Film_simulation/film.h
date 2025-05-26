#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Movie {
private:
	string title;
	string rating;
	int watch_count;

public:
	Movie(string title, string rating, int watch_count) : title(title), rating(rating), watch_count(watch_count) {}

	string get_title() const {
		return title;
	}

	string get_rating() const {
		return rating;
	}

	int get_watch_count() const {
		return watch_count;
	}

	void increment_watch() {
		watch_count++;
	}
};


class MovieLibrary {
private:
	vector <Movie> movies;

public:
	bool add_movie(const string& title, const string& rating, int watch_count);

	string increment_watch_count(const string& title);

	void display_movies(); 

	bool remove_movie(const string& title);

	string most_watched()

};