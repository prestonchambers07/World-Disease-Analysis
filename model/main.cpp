#include <iostream>
#include "Read.cpp"






int main(int argc, char *argv[]){

    // argc = arg count
    // argv = list of arguements

    // ./a {argument (year) passed}
    // ./a 2016 
    cout << argv[1]; // Going to be the year 

    countryHealth data;

    data.loadData(argv[1]);
    // Do something with the loaded data such as json, csv, or txt that we can read in JS/TS





    













    return 0; 
}