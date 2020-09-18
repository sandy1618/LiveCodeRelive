// We have un-ordered set and maps.
#include <iostream>
#include <string>
#include <unordered_set> // for set 
#include <unordered_map> // for map
// Note: Multi-set and multi-map allows duplicate. Set,Map dont allow duplicates.
// constant iterators ie iterators cant be changed  

// Steps: how to initialize unordered set, and using iterator to access values. 
void UnSet(){
    std::unordered_multiset <std::string> coll;
    //elements are stored based on the hash, but in unspecified order, 
	coll.insert("Hulk"); // using insert
	coll.insert("Batman");
	coll.insert("Green Lantern");
	coll.insert("The Flash");
	coll.insert("Wonder Woman");
	coll.insert("Iron man");
	coll.insert("Iron man");
	coll.insert("Iron man");
	coll.insert("Wolverine");
	coll.insert("Dr. Strange");
	coll.insert("Hawkman");

    for (const std::string x : coll){
            std::cout << "Bucket #:" << coll.bucket(x) << " contains :" << x << std::endl;
    }

    std::cout << "Bucket count:" << coll.bucket_count() << std::endl; 
	std::cout << "Number of elements:" << coll.size() << std::endl;
	std::cout << "Load factor:" << coll.load_factor() << std::endl ;

}

void UnMap() {
	std::unordered_multimap<std::string, std::string> coll;
	//Only unordered_map support [] operator
	/*coll["Batman"] = "Brue Wayne";
	coll["Superman"] = "Clark Kent";
	coll["Hulk"] = "Bruce Banner";*/
    coll.insert(std::make_pair("Batman", "Bruce Wayne"));
	coll.insert(std::make_pair("Batman", "Matches Malone"));
	coll.insert(std::make_pair("Superman", "Clark Kent"));
	coll.insert(std::make_pair("Hulk", "Bruce Banner"));

	for (const auto &x : coll) {
		std::cout << "Bucket #:" << coll.bucket(x.first) << " ->" << x.first << ":" << x.second << std::endl; 
	}
}


int main()
{
    UnMap();
    return 0;
}

