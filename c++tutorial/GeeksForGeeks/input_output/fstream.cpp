/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream> 

/* fstream header file for ifstream, ofstream, 
fstream classes */
#include <fstream> 
using namespace std; 
std::string line; 
void readbyLinetoWrite(std::ofstream& fout,std::string& line){
    	
	while (fout) { 

		// Read a Line from standard input 
		getline(cin, line); 

		// Press -1 to exit 
		if (line == "-1") 
			break; 

		// Write line in file 
		fout << line << endl; 
	} 

	// Close the File 
	fout.close(); 
}
void readbySpacetoWrite(std::ofstream& fout,std::string& line){
    //while thefile is open,
	while (fout) { 

		// Use cin to read words with delimiter as spaces 
		cin >>  line; 

		// Press -1 to exit 
		if (line == "-1") 
			break; 

		// Write line in file 
		fout << line ;
	} 

	// Close the File 
	fout.close(); 
}
// Driver Code 
int main() 
{ 
	// Creation of ofstream class object 
	ofstream fout; 
	// by default ios::out mode, automatically deletes 
	// the content of file. To append the content, open in ios:app 
	// fout.open("sample.txt", ios::app) 
	fout.open("./GeeksForGeeks/input_output/sample.txt"); 
// Execute a loop If file successfully opened 
    
    readbyLinetoWrite(fout, line);
    // readbySpacetoWrite(fout, line);


	// Creation of ifstream class object to read the file 
	ifstream fin; 

	// by default open mode = ios::in mode 
	fin.open("./GeeksForGeeks/input_output/sample.txt"); 

	// Execute a loop until EOF (End of File) 
	while (fin) { 

		// Read a Line from File 
		// getline(fin, line); 
        fin >> line;

		// Print line in Console 
		cout << line << endl; 
	} 

	// Close the file 
	fin.close(); 

	return 0; 
} 
