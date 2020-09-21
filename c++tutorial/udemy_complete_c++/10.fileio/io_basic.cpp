#include <iostream>
#include <fstream>
#include <string>

void Write(){
    std::ofstream out{"data.txt"};// output stream from program to out.
    // In write, is_open is not useful because, compiler creates if the file does not exists.
    if (!out.is_open()){ // checking if file is open or not. 
        std::cout << "could not open the file" << std::endl;
        return;
    }
    out << "Hello World" << std::endl;
    out << 10 << std::endl;
    out.close(); // invoke .close() to close stream. else,closed when obj. is distroyed.
}

//Use .is_open() in Read operatiosn
void Read(){
    std::ifstream input{"data.txt"};
    // input.open("data.txt"); // you can use open() also instead of direct initializea
    if(!input.is_open()){
        std::cout << "could not open the file" << std::endl;
        return;
    }
    std::string message;
    std::getline(input,message);//else, with space, the stream ends just like cin.
    // getline termitase wen it sees \n new linel. but the curser goes to next line. 
    // thats why the next input is int.
    int value{};
    input >> value;
    input.close();
    std::cout << message << ":" << value << std::endl;
}
int main(){
    Write();
    Read();

}