#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class diseaseTracker
{
    struct diseaseInfo{
        //strings of arbitrary info for the diseases later
        string x; //= some info 
        diseaseInfo(string info)
            : x(info) {}  
        
    }; 
    private:
        unordered_map<string, unordered_map<string, diseaseInfo>> graph;

    public: 
        //should add disease alongside its info   
        void addDisease(const string& country, const string& disease, const diseaseInfo& info) {
            graph[country][disease] = info;
        }

        // directly get the uhhh disease info 
        diseaseInfo& getInfo(const string& country, const string& disease) {
            return graph[country][disease];
        }

        //return only diseases from a certain country name 
        unordered_map<string, diseaseInfo>& operator[](const string& countryName) {
            return graph[countryName];
        } 

};



