#ifndef ANIME_H
#define ANIME_H
#include "Item.h"
using namespace std;

class Anime : public Item
{
private:
    int episodes;
    int seasons;
    string studio;
    
public:
    Anime();
    Anime(string name, string genre, int episodes, float rating, int year, 
    string studio, int seasons, string author);
    ~Anime();

    //sets
    void setEpisodes(int episodes);
    void setSeasons(int seasons);
    void setStudio(string studio);
    
    //gets
    int getEpisodes();
    string getStudio();
    int getSeasons();

    void print();
};


#endif