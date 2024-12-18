#pragma once

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class countryHealth{


    unordered_map<string, unordered_map<string, vector<string>>> graph;
    // ex access: graph["france"]["parknsons"][0] = "32 dead"; index's will represent info
    // about disease casualties and etc. 








public:

    // functions here
    countryHealth();

    void loadData(string year);


    // placeholder functions probably won't need later. 
    void getCommonDeaths(string disease);




    void writeData();



};


