# CPP_Examples
Examples that demonstrate features of C++

Branch Classroom:
	This branch is going to be used to add the class "classroom" to modify several student objects at once
	Functionality:
		- Read a text file of with the student database format (described below).
		- Initialize students based on the text read, and update grades
		- have public "publish_grades()" member function that outputs a text file in SDB format
		- have a student lookup function for finding a particular students info (may use map in the future for this reason)
		- have a "passed()" member function that outputs a text file of all students that passed
		- have a "failed()" member function that outputs a text file of all students that failed

SDB Format:
1-30:  Student Name | 33-38: participation | 41-46: Test 1 | 49-54: Test 2
57-62: Test 3 		| 65-70: Test 4 	   | 73-78: Final  | 91-96: Overall Grade

Example File
Johnny Appleseed                100.00   95.25  105.00   89.83   93.50   82.80 
Ariana Bronson                           65.00   75.45   49.50   88.75   55.00 
Michael Darriuson                89.45   88.67   98.50   74.33   62.85   78.90 
