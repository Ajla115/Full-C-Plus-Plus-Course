//
// Created by User on 25. 2. 2024..
//#10: Write a C++ program to create a class called "Movie" with attributes for title, director, actors, and reviews,
// and methods for adding and retrieving reviews.

#include <iostream>
#include <cstring>

using namespace std;

class Movie{
public:
    string title, director, actors, reviews;

    Movie(string t, string d, string a, string r ){
        title=t;
        director=d;
        actors=a;
        reviews=r;
    }

    void setReviews(int r){
        reviews=r;
    }

    string getReviews(){
        return reviews;
    }


};
int main()
{
    Movie m("a", "t", "t", "l");


    cout<<m.getReviews();

    return 0;
}


