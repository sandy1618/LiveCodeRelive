#include <iostream>
#include <map> // contains both map and mutlimap
// multimap allows duplicate keys with diff.
// Remember for a Map: The contents are always pair objects. x.first, x.second

void Map() {
	std::map<int, std::string> m{
		{1, "Superman"},
		{2, "Batman"},
		{3, "Green Lantern"}
	};
	m.insert(std::pair<int, std::string>(8, "Aquaman"));
	m.insert(std::make_pair(6, "Wonder Woman"));
	m.insert(std::make_pair(6, "Powergirl")); 
    // In map, new value with same key is rejected. 

	//Only map support [] operator
	/*m[0] = "Flash";
	m[0] = "Kid Flash";*/
	auto itr = m.begin();
	m.erase(0);
	//returns a pair that contains begin & end of the range.
	auto found = m.equal_range(6);
	while (found.first != found.second) {
		std::cout << found.first->first << ":" << found.first->second << std::endl;
		found.first++;
	}

	//std::cout << itr->first << ":" << itr->second << std::endl; 

	//Avoid using [] for searching as it will insert an empty element if a key cannot be found
	//std::cout << "10:" << m[10] << std::endl;
	
	/*for (const auto &x : m) {
		std::cout << x.first << ":" << x.second << std::endl;
	}*/

	//Lookup by key
	/*itr = m.find(1);
	if (itr != m.end()) {
		std::cout << "Found:" << itr->second << std::endl;
	}
	else {
		std::cout << "Not found" << std::endl;
	}*/

}
void Multimap() {
	std::multimap<int, std::string> m{
		{1, "Superman"},
		{2, "Batman"},
		{3, "Green Lantern"}
	};
	m.insert(std::pair<int, std::string>(8, "Aquaman"));
	m.insert(std::make_pair(6, "Wonder Woman"));
	m.insert(std::make_pair(6, "Powergirl"));

	//Only map support [] operator, not multi_map
	/*m[0] = "Flash";
	m[0] = "Kid Flash";*/
	auto itr = m.begin();
	m.erase(0);
	//returns a pair that contains begin & end of the range.
	auto found = m.equal_range(6);
	while (found.first != found.second) {
		std::cout << found.first->first << ":" << found.first->second << std::endl;
		found.first++;
	}
}
int main() {
	Map();
	return 0;

}