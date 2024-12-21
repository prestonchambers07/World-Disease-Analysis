#include <iostream>
#include <fstream>
#include <sstream>
#include "Read.h"

using namespace std;



countryHealth::countryHealth(){
    
    // idk do constructor things here



}

void countryHealth::loadData(string year){

    
    // Read Data and load it into that year 
    // <!> Each Column Indexed <!> 
    
    // 1. Country
    // 2. Year
    // 3. Disease Name
    // 4. Disease Category
    // 5. Prevalence Rate (%)
    // 6. Incidence Rate (%)
    // 7. Mortality Rate (%)
    // 8. Age Group
    // 9. Gender
    // 10. Population Affected
    // 11. Healthcare Access (%)
    // 12. Doctors per 1000
    // 13. Hospital Beds per 1000
    // 14. Treatment Type
    // 15. Average Treatment Cost (USD)
    // 16. Availability of Vaccines/Treatment
    // 17. Recovery Rate (%)
    // 18. DALYs
    // 19. Improvement in 5 Years (%)
    // 20. Per Capita Income (USD)
    // 21. Education Index
    // 22. Urbanization Rate (%)
    
    string filename = "../Data/" + year + ".csv";
    ifstream file(filename);
    string line;
    
    while (getline(file, line)) {
        stringstream ss(line);
        string country, year, disease;
        vector<string> rowData;
        
        // Read the three keys
        getline(ss, country, ',');  // Country
        getline(ss, year, ',');     // Year
        getline(ss, disease, ',');  // Disease Name
        
        // Read remaining values into vector
        // These will be columns 4-22 (Disease Category through Urbanization Rate)
        string value;
        while (getline(ss, value, ',')) {
            rowData.push_back(value);
        }
        
        // Add to triple nested map structure
        graph[country][year][disease] = rowData;
    }
    cout << "Done Reading!" << endl;
}


// placeholder functions probably won't need later. 
void countryHealth::getCommonDeaths(string disease){



}



void countryHealth::writeData(){






}


void countryHealth::printGraph() {
    for (const auto& countryPair : graph) {
        cout << "Country: " << countryPair.first << endl;
        
        for (const auto& yearPair : countryPair.second) {
            cout << "\tYear: " << yearPair.first << endl;
            
            for (const auto& diseasePair : yearPair.second) {
                cout << "\t\tDisease: " << diseasePair.first << endl;
                cout << "\t\tData: ";
                
                for (const auto& value : diseasePair.second) {
                    cout << value << " | ";
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }
}