// ConsoleApplication1.cpp : Defines the entry point for the console application.

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		cout << "Error with input agrs.." << endl;
		return 1;
	}

	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		cout << i << ":" << argv[i] << endl;
	}

	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
		return 1;
	}

	///////////////////////
	// Work here with open file.....
	///////////////////////

    //variables
    string file_name;
    char vowels[16] = {'a', 'e', 'i', 'o', 'u', 'A', 'E','I', 'O', 'U', 'x', 'y', 'z', 'X', 'Y', 'Z'};
    int a_total = 0;
    int e_total = 0;
    int i_total = 0;
    int o_total = 0;
    int u_total = 0;
    int x_total = 0;
    int y_total = 0;
    int z_total = 0;
    char current_ch = ' ';
    int vowel_total; 

    //assignment outputs
    cout << "************************************************************" << endl;
    cout << "************ Welcome to my Letter Count Program ************" << endl;
    cout << "************************************************************" << endl;

        //loop to get number of vowels and other letters in file
        while(inFile.get(current_ch))
            if (current_ch == vowels[0] || current_ch == vowels[5]){
                a_total ++;
            }else if (current_ch == vowels[1] || current_ch == vowels[6]){
                e_total ++;
            }else if (current_ch == vowels[2] || current_ch == vowels[7]){
                i_total ++;
            }else if (current_ch == vowels[3] || current_ch == vowels[8]){
                o_total ++;
            }else if (current_ch == vowels[4] || current_ch == vowels[9]){
                u_total ++;
            }else if (current_ch == vowels[10] || current_ch == vowels[13]){
                x_total ++;
            }else if (current_ch == vowels[11] || current_ch == vowels[14]){
                y_total ++;
            }else if (current_ch == vowels[12] || current_ch == vowels[15])
                z_total ++;
            
        //calculating total vowels and other letters found in file
        vowel_total = a_total + e_total + i_total + o_total + u_total + x_total + y_total + z_total;
        
    //outputs
    cout << "The number of A's:" << setfill('.') << setw(40) << a_total << endl;
    cout << "The number of E's:" << setfill('.') << setw(40) << e_total << endl;
    cout << "The number of I's:" << setfill('.') << setw(40) << i_total << endl;
    cout << "The number of O's:" << setfill('.') << setw(40) << o_total << endl;
    cout << "The number of U's:" << setfill('.') << setw(40) << u_total << endl;
    cout << "The number of X's:" << setfill('.') << setw(40) << x_total << endl;
    cout << "The number of Y's:" << setfill('.') << setw(40) << y_total << endl;
    cout << "The number of Z's:" << setfill('.') << setw(40) << z_total << endl;
    cout << "The vowel count is:" << setfill('.') << setw(40) << vowel_total << endl;

	inFile.close();

	return 0;
}

