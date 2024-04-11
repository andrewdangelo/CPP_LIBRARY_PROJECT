#ifndef CD_H
#define CD_H

#include <string>
#include "libraryItem.h"


using namespace std;

class CD : public LibrayItem
{
    private:
        string artist;
        int songs;
    public:
        CD(int id, string name, string genre, int songs) : LibraryItem(int id, string name, string genre);

        string getArtist() const;

        int getSongs() const;  
};

#endif