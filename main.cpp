//  main.cpp
//  Classroom
//
//  Created by Seth Porter on 2/3/21.
//  Copyright © 2021 Seth Porter. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream> 

using std::vector;
using std::string;
using std::stringstream;

class student {
private:
    vector<float> Test;
    float participation;
    float final_exam;
    string name;
    float grade;
	void update_grade();
public:
    student(): participation(-1), final_exam(-1), grade(-1) { }
    student(string);
    string student_name() const { return name; }
    vector<float> test_scores() const { return Test;}
    float final_exam_grade() const { return final_exam; }
    float current_grade() { update_grade(); return grade; }
	void print_grade() const;
    bool is_grade() const { return grade >= 0; }
    void grade_exam(float);
    void grade_exam(int, float);
};

#include "classroom.h"

int main() {
    student billy("Billy");
	float scores[] = {98, 89, 72, 69};
	std::cout << "The first test was a " << *scores << ", and the "
				 "fourth test was a " << *(scores + 3) << std::endl;
	// let's set a fourloop to update billy's grades using scores
	for (float * iter = scores; iter != scores + 4; iter++ ) { 
		billy.grade_exam(*iter);
	}
	// alright now let's test to see if it worked
	vector<float> billy_grades = billy.test_scores();
	std::cout << "Billy's grades were: " << std::endl;
	for (vector<float>::const_iterator iter = billy_grades.begin(); iter != billy_grades.end(); iter++) { 
		std::cout << *iter << std::endl;
	} 

	//lastly, lets get billy's current grade
 	std::cout << "Billy's current grade is a " << billy.current_grade() << std::endl;
    return 0;
}

