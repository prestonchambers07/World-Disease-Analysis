#include <iostream>
#include <string>
#include "Read.cpp"






int main(int argc, char *argv[]){

    // argc = arg count
    // argv = list of arguements

    // ./a {argument (year) passed}
    // ./a 2016 
    cout << argv[1] << endl;; // Going to be the year 

    countryHealth data;

    data.loadData(string(argv[1]));
    data.loadData("2011");


    // Do something with the loaded data such as json, csv, or txt that we can read in JS/TS
    data.printGraph();


    













    return 0; 
}