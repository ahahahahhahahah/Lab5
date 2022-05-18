#ifndef JSONREADER_H
#define JSONREADER_H
#include <vector>
#include "cars.h"
#include "abstractreader.h"
#include <QString>
#include <fstream>
#include <iostream>

class JSONReader: public AbstractReader
{
public:
    std::vector<Cars> ccars;
    std::ifstream fin;
    JSONReader(const QString& filename);
    ~JSONReader();

    std::vector<Cars> readAll() override{ int a = 1; };

    bool is_open() //override
    {
       return fin.is_open();
    }
};


#endif // JSONREADER_H
