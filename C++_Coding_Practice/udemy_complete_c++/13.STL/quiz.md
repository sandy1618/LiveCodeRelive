### How to modify the value part of a key (not the key itself) in a map? But we're not sure if the key exists or not. Modify the value ONLY if it exists

std::map<int, std::string> m ;
m.insert(...) ;
//Modify the value part of key 2
??

// auto itr = m.find(2);
if(itr != m.end()){
    ite->second = "new value" ; // map returns a pair object. so access 
    // access second value.
}