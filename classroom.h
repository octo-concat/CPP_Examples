//
//  classroom.hpp
//  Classroom
//
//  Created by Seth Porter on 2/3/21.
//  Copyright © 2021 Seth Porter. All rights reserved.
//

#ifndef classroom_h
#define classroom_h

#include <string>

using std::string;
using std::logic_error;
using std::vector;

student::student(std::string n): name(n), grade(-1),
                                 participation(-1), final_exam(-1) { }

void student::print_grade() const {
	if (is_grade()) {
		std::cout << "has a " << grade << std::endl;
	} else {
		std::cout << "does not have a grade yet." << std::endl;
	} // end if statement
} // end print_grade()

void student::grade_exam(float test_grade) {
	if (Test.size() != 4) { 
		Test.push_back(test_grade); 
	} else { 
		string error = "Sorry, all test_grades are recorded"
					   ", must specify which grade to change.";
		throw logic_error(error);
	} 
} 

void student::grade_exam(int testNumber, float test_grade) {
	if ( test_grade <= Test.size() ) { 
		Test[testNumber-1] = test_grade;
	} else {
		stringstream s1; s1 << testNumber;
		stringstream s2; s2 << Test.size();
		string error = "Index " + s1.str() + " is out of bounds, "
					   "currently only " + s2.str() + " tests graded."; 
		throw logic_error(error);
	} 
}

void student::update_grade() { 
	float total_pts(0), cur_pts(0);
	if ( participation != -1) { total_pts += 0.1*100; cur_pts = 0.1*participation; }
	if ( final_exam != -1) { total_pts += 0.3*100; cur_pts = 0.3*final_exam; }
	for ( vector<float>::const_iterator it = Test.begin(); it != Test.end(); it++ ) { 
		total_pts += 0.15*100;
		cur_pts += 0.15 * *it;
	}
	grade = cur_pts / total_pts * 100;
}

#endif /* classroom_h */
