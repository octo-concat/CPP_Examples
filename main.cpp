//  main.cpp
//  Classroom
//
//  Created by Seth Porter on 2/3/21.
//  Copyright © 2021 Seth Porter. All rights reserved.
//

// only include headers needed for main()
#include <iostream>
#include <fstream>
#include <string>
//#include "classroom.h"

using std::vector;		using std::string;
using std::cout;		using std::endl;
using std::ifstream;

int main() {
	string line;
	ifstream myfile ("students.txt");
	if (myfile.is_open()) { 
		while ( getline(myfile,line) ) { 
			cout << line << "\n";
		}
		myfile.close();
	}
    return 0;
}

