//  main.cpp
//  Classroom
//
//  Created by Seth Porter on 2/3/21.
//  Copyright © 2021 Seth Porter. All rights reserved.
//

// only include headers needed for main()
#include <iostream>
#include "classroom.h"

using std::vector;
using std::string;

int main() {
	student billy("Billy");
	billy.grade_exam(98.0); billy.grade_exam(25.0); billy.grade_exam(98.0); billy.grade_exam(25.0);
	vector<float> Tests = billy.test_scores();
	std::cout << "Test average: " << (Tests[0] + Tests[1])/2 << std::endl;
    return 0;
}

