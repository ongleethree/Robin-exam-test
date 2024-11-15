#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ALLScore = 0;
bool exam_running = true;
bool exam_not_running = false;
float PercentileScore = 0;
typedef struct
{

	int choose;
	string username,date;


}Robin_exam;

typedef struct
{


	char question[5];
	string drawn_question;
	

}Robin_Draw_question;

typedef struct
{

	char number;
	int All_point;
	int calculate_all_point;
	float calculate_percentile_point;

}calculate_exam;



void Draw_detail();

void calculate_point(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin);

void Question_draw1(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin);

void Question_draw2(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin);

void Question_draw3(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin);

void Question_draw4(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin);

void Question_draw5(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin);

calculate_exam calculate_robin;

Robin_exam exam;

Robin_Draw_question question;




int main()
{
	cout << "Enter Examiner name = " << "\t\t";
	cin >> exam.username;
	cout << "Enter date  = " << "\t\t";
	cin >> exam.date;

	Draw_detail();

	while (exam_running)
	{

		Question_draw1(&question, &exam, &calculate_robin);

		Question_draw2(&question, &exam, &calculate_robin);

		Question_draw3(&question, &exam, &calculate_robin);

		Question_draw4(&question, &exam, &calculate_robin);

		Question_draw5(&question, &exam, &calculate_robin);

		calculate_point(&question, &exam, &calculate_robin);

		cout << "Percentile point = " << PercentileScore / 5 * 100  << "%" << endl; 
		//Find percentile from score You get / Max score * 100
		break;
		
	}
	 

	return 0;
}

void Question_draw1(Robin_Draw_question *question, Robin_exam *exam ,calculate_exam *calculate_robin)
{
	cout << "_____________________________________" << "\r\n";

	cout << "What is the Robin favorite food??" << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "*** choose only one Answer ***" << "\r\n";

	cout << " 1.Spageti " << "\r\n";
	cout << " 2.cake roll " << "\r\n";
	cout << " 3.pizza " << "\r\n";
	cout << " 4.bread " << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "Enter your answer = " << endl ;

	cin >> exam -> choose;

	if (exam -> choose == 1)

	{
		cout << "!!!! correct answer !!!!" << endl ;
		calculate_robin->All_point++;
		ALLScore = calculate_robin->All_point;

	}
	else
	{
		cout << "Wrong answer" << endl;
	}
}

void Draw_detail()
{

	cout << "______________________________________________________________________" << "\r\n";

	cout << " This is the Exam for someone interesting Robin information " << "\r\n";

	cout << "In this Exam Examiner have only 20 Minute to do " << "\r\n";
	cout << "______________________________________________________________________" << "\r\n";

	cout << "*** This Exam is a multiple choice please carefully for choosing correct answer ***" << "\r\n";

	cout << "*** All Point is 5 point and have 10 Question ***" << "\r\n";

	cout << "______________________________________________________________________" << "\r\n";

}


void Question_draw2(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin)
{
	cout << "_____________________________________" << "\r\n";

	cout << "What age Robin is ???" << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "*** choose only one Answer ***" << "\r\n";

	cout << " 1. 12 Years old " << "\r\n";
	cout << " 2. 18 Years old " << "\r\n";
	cout << " 3. 20 Years old " << "\r\n";
	cout << " 4. 24 Years old " << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "Enter your answer = " << endl;
	cin >> exam->choose;

	if (exam->choose == 3)

	{
		cout << "!!!! correct answer !!!!" << endl;
		calculate_robin->All_point++;
		ALLScore = calculate_robin->All_point;

	}
	else
	{
		cout << "Wrong answer" << endl;
	}
}


void Question_draw3(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin)
{
	cout << "_____________________________________" << "\r\n";

	cout << "What type of job robin is ???" << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "*** choose only one Answer ***" << "\r\n";

	cout << " 1. chief " << "\r\n";
	cout << " 2. singer " << "\r\n";
	cout << " 3. drawer " << "\r\n";
	cout << " 4. None job " << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "Enter your answer = " << endl;

	cin >> exam->choose;

	if (exam->choose == 2)

	{
		cout << "!!!! correct answer !!!!" << endl;
		calculate_robin->All_point++;
		ALLScore = calculate_robin->All_point;

	}
	else
	{
		cout << "Wrong answer" << endl;
	}
}


void Question_draw4(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin)
{
	cout << "_____________________________________" << "\r\n";

	cout << "Which choice isn't a code language ???" << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "*** choose only one Answer ***" << "\r\n";

	cout << " 1. C++ " << "\r\n";
	cout << " 2. java script " << "\r\n";
	cout << " 3. java " << "\r\n";
	cout << " 4. Microsoft " << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "Enter your answer = " << endl;

	cin >> exam->choose;

	if (exam->choose == 4)

	{
		cout << "!!!! correct answer !!!!" << endl;
		calculate_robin->All_point++;
		ALLScore = calculate_robin->All_point;

	}
	else
	{
		cout << "Wrong answer" << endl;
	}
}

void Question_draw5(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin)
{
	cout << "_____________________________________" << "\r\n";

	cout << "what the spicies robin is ?" << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "*** choose only one Answer ***" << "\r\n";

	cout << " 1. Bird " << "\r\n";
	cout << " 2. Angel " << "\r\n";
	cout << " 3. Bear " << "\r\n";
	cout << " 4. Fly " << "\r\n";

	cout << "_____________________________________" << "\r\n";

	cout << "Enter your answer = " << endl;

	cin >> exam->choose;

	if (exam->choose == 1)

	{
		cout << "!!!! correct answer !!!!" << endl;
		calculate_robin->All_point++;
		ALLScore = calculate_robin->All_point;

	}
	else
	{
		cout << "Wrong answer" << endl;
	}
}

void calculate_point(Robin_Draw_question* question, Robin_exam* exam, calculate_exam* calculate_robin)
{

	PercentileScore = ALLScore;

	calculate_robin->calculate_all_point = ALLScore;

	cout << "ALL SCORE YOU GET IS = " << calculate_robin->calculate_all_point << "\r\n";

	calculate_robin->calculate_percentile_point = PercentileScore; 


}

