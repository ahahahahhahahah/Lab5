#include "jsonreader.h"
#include <iostream>
#include "json.hpp"
#include <QString>
#include "cars.h"

JSONReader::JSONReader(const QString& filename)
{
    fin.open(filename.toLatin1().data());



        nlohmann::json objJson;
        std::vector<Cars> cars;
        fin >> objJson;


        for (auto &e: objJson)
        {
            Cars temp;
            temp.n = (e["id"]);

            temp.model = QString::fromStdString(e["model"]);

            temp.color = e["color"];

            temp.year = e["year"];

            cars.push_back(temp);

        }
        ccars = cars;


}

JSONReader::~JSONReader()
{
    fin.close();
}


