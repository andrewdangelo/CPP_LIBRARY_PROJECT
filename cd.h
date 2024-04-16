#ifndef CD_H
#define CD_H

//test
#include <string>
#include "libraryItem.h"


using namespace std;

class CD : public LibrayItem
{
    private:
        string artist;
        int songs;
    public:
        CD(int id, string name, string genre, int songs) : LibraryItem(id, name, genre);

        string getArtist() const;

        int getSongs() const;  
};

#endif