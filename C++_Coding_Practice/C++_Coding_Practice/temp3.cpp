#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
// void print_vect(vec)
template<typename T>
void print_vect(T v){
    for(auto x:v){
        cout << x << endl;
    }
}

int str_to_int(string str){
    stringstream ss;
    int temp;
    ss << str;
    ss >> temp;
    return temp;

}
int main (){
  string line;
//   std::stringstream sstrm;
  vector<int> num_vec;
  vector<string> str_vec;
  int x; 
  string  temp;
  string  str;
    getline(cin, line);
    std::stringstream sstrm(line);
    vector<string> input_vec; 
    while(sstrm >> temp){
        input_vec.push_back(temp);
    }
  
    // extracting data
    vector<string> token_vec;
    for(auto itr = input_vec.begin(); itr < input_vec.end()-1; ++itr ){
        stringstream sstrm2(*itr);
        string  token;
        
        while(getline(sstrm2,token,':')){
            
            token_vec.push_back(token);
        }   
        
        
    }
    // extracting data 2
    int i{};
    // // creating a map of num_vec & str_vec.
    map<int,string> m;
    while(i<token_vec.size()){
        m.insert(make_pair(str_to_int(token_vec[i]),token_vec[i+1]));
        i = i+2;
    }
    int target = str_to_int(*input_vec.rbegin());
    

    for (auto z:m){
        if (target == 1 ){
          cout << 1 ;
          break;  
        } 
        else if(target % z.first == 0) cout<<z.second;  
        
    }
    cout << endl;

    


  return 0;
  

  
}
