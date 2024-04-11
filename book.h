#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "libraryItem.h"


using namespace std;

class Book : public LibrayItem
{
    private:
        string author;
        int pages;
    public:
        Book(int id, string name, string genre, int pages);

        string getAuthor() const;

        int getPages() const;  
};

#endif