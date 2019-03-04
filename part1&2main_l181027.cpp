#include "student.h"


int main()
{

	//creating object s1
	Student s1;

	//adding scores in s1
	s1.addQuizScore(10);
	s1.addQuizScore(3);
	s1.addQuizScore(7);
	s1.addQuizScore(1);

	cout << "\n";
	//printing s1
	s1.print();


	//using overloaded constructor to create s2
	Student s2(4, 2);    


	//adding scores in s2
	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);

	cout << "\n";
	//printing s2
	s2.print();


	//creating s3 using copy constructor
	Student s3 = s1;


	cout << "\n";
	//printing s3
	s3.print();


	//updates score
	s3.updateScore(0,3);  //parameter 0 should be given instead of 1

	cout << "\n";
	//printing s3
	s3.print();

	//tries to update score of 10th quiz
	s3.updateScore(10,3);  

	cout << "\n";

	//compare s1 with s2 
	cout << s1.compare(s2) <<endl;

	//set GPA of s3
	s3.setGPA(3.0);


	//printing s1 and s3

	cout << "\n";
	//printing s1
	s1.print();

	cout << "\n";
	//printing s3
	s3.print();




	/* Copy constructor was invoked on line 36 while creating object s3 because
	a new object is created while assigning it to another object with "=" operator */ 


	/* Destructor is invoked first for s3 on line 36 then for 
	s2 on line 22 then for s1 on line 8. This is because objects created
	last are destroyed first with destructor */



}
