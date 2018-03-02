
#include <pair>

void main() {

	// associate strings with integers
    std::map<std::string, int> grades;

    //---------------------------------
    // General Operations
    //---------------------------------

    // insert a new association
    grades.insert(make_pair("Tom Eilers", 0));

    // access the value for "Tom Eilers"
    int grade = grades.at("Tom Eilers");
	
	// reverse lookup
	auto namen = grades.find(7);
    string name = *namen;

    //Size
    unsigned int size = m.size();

    //Iterate
    for(auto it = grades.begin(); it != grades.end(); it++) {
        std::cout << "key" << *it << std::endl;
    }

    //Remove by key, value
    m.erase("key");
    m.erase(m.find("value"));

    //Clear
    m.clear();

    //---------------------------------
    // Container-Specific Operations
    //---------------------------------

    //Find if an element exists by value
    bool exists = (m.find("value") != m.end());

    //Count the number of elements with a certain key
    unsigned int count = m.count("key");

}
