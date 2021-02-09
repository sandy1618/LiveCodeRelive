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
    while(i<token_vec.size()){
        num_vec.push_back(str_to_int(token_vec[i]));
        str_vec.push_back(token_vec[i+1]);
        i = i+2;
    }
    int target = str_to_int(*input_vec.rbegin());
    // print_vect(num_vec);
    // print_vect(str_vec);
    // cout << num_vec[0];
    // cout << target << endl;
    // for(int k=0;k<num_vec.size();++k){
    //     cout << num_vec[k] << str_vec[k] ;
    // }

    // // // creating a map of num_vec & str_vec.
    map<int,string> m;
    for(int j=0; j<num_vec.size();++j){
        // m.insert(make_pair(num_vec[j],str_vec[j]));
        int key = num_vec[j];
        string value = str_vec[j];
        m[key] = value;
    }

    for (auto z:m){
        if (target == 1 ) cout << 1 << endl;
        else if(target % z.first == 0) cout<<z.second;  
        
    }

    


  return 0;
  

  
}
