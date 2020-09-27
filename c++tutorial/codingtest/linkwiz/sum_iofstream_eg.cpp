#include<bits/stdc++.h>

void printVect(std::vector<int>& vect){
    // std::sort(vect.begin(), vect.end());
    // std::cout << *(vect.end()-1) << std::endl;
    for(auto x: vect) std::cout << x;
}

void writeVect(std::vector<int> & vect,std::ofstream& fout){
    for(auto x:vect) fout << x;
}
int main(){

    std::string path{"/home/uncomment/Educational/LiveCodeRelive/c++tutorial/codingtest/linkwiz/"};
    std::string inputPath = path + "receipt.txt";
    std::string outputPath = path + "output.txt";
    std::ifstream fin(inputPath);
    // fin.open("receipt.txt");
    std::ofstream fout;
    fout.open(outputPath);
    if(!fin.is_open()){
        std::cout << "File not found , checking current workign dir\n";        
    }
    // Anothr 
    std::vector<int> vect;
    // this one reads 
    if(fin){
        int val;
        while(fin >> val){
            vect.push_back(val);
        }
    }
    writeVect(vect,fout);
    // closing files . 
    fin.close();
    fout.close();
    return 0;
}