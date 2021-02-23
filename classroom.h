//  classroom.h
//  Classroom Declaration File
//
//  Created by Seth Porter and Jazmine Torres on 2/3/21.
//  Copyright © 2021 Seth Porter. All rights reserved.
//

// Don't forget header guards!
#ifndef classroom_h
#define classroom_h

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

// declare classroom class for grading several students
class classroom { 
private:
	// What private members do we need?
	// Container of student objects

private:
	// what private methods do we need?

public:
	// what public methods do we need?
	// read_grades(string) for reading a SDB file
	// publish_grades() for outputting a SDB file
	// find_student() for looking up a particular student's file

};

#include "classroom_imp.h"

#endif
