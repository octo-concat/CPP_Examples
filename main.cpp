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
	billy.grade_exam(98);
	billy.grade_exam(89);
	billy.grade_exam(73);
	billy.grade_exam(69);
	std::vector<float> billys_grades = billy.test_scores();
	for (size_t i = 0; i != billys_grades.size(); i++) { 
		std::cout << billys_grades[i] << std::endl;
	}	
    return 0;
}

