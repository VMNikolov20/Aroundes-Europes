#include <iostream>
#include <windows.h>
#include <conio.h>



using namespace std;


void selectOption(int totalQ, string allQuestions[],string allOptions[10][4], int selectedOption[])
{
	system("cls");
	for (int i = 0; i < totalQ; i++) {
		cout << "Question No: " << (i + 1) << endl;
		cout << allQuestions[i] << endl;
		cout << "1." << allOptions[i][0] << endl;
		cout << "2." << allOptions[i][1] << endl;
		cout << "3." << allOptions[i][2] << endl;
		cout << "4." << allOptions[i][3] << endl << endl;
		
		cout << "Select your answer as 1, 2, 3 or 4 here : ";
		cin >> selectedOption[i];
		if (selectedOption[i] == 1 || selectedOption[i] == 2 || selectedOption[i] == 3 || selectedOption[i] == 4 || selectedOption[i] == 0)
		{	}
		else
		{
			check(check2);
			i = 9;
			
		}
		system("cls");
	}
}

void compareQuestions(int totalQ,string allQuestions[], string allOptions[10][4], int selectedOption[], string correctAns[])
{
	
	for (int i = 0; i < totalQ; i++) {
		cout << "Question No: " << (i + 1) << endl;
		cout << allQuestions[i] << endl;
		cout << "1." << allOptions[i][0] << endl;
		cout << "2." << allOptions[i][1] << endl;
		cout << "3." << allOptions[i][2] << endl;
		cout << "4." << allOptions[i][3] << endl;

		if (selectedOption[i] == 0) {
			cout << "You have Skipped this Question." << endl;
		}
		else {
			cout << "You have Selected : " << allOptions[i][selectedOption[i] - 1] << endl;
		}
		cout << "Correct Option was : " << correctAns[i] << endl << endl;

		cout << "Press any key to continue checking..." << endl;
		char character = _getch();
		
		cout << endl << "---------------------------------------------" << endl;
	}
}
void printResult()
{
	cout << endl << endl;
	cout << "************************************ " << endl;
	cout << "*********** Your Result ************ " << endl;
	cout << "************************************ " << endl << endl;
}

void printCorrectOptions()
{
	cout << "********************************* " << endl;
	cout << "****** Compare your answer ****** " << endl;
	cout << "********************************* " << endl << endl;
}

void result(int totalQ, int selectedOption[], string correctAnsBulgaria[], string allOptionsBulgaria[10][4], int correct, int incorrect, int skipped)
{
	for (int i = 0; i < totalQ; i++)
	{
		if (selectedOption[i] != 0) {
			if (correctAnsBulgaria[i] == allOptionsBulgaria[i][selectedOption[i] - 1]) {
				correct++;
			}
			else {
				incorrect++;
			}
		}
		else {
			skipped++;
		}
	}
	cout << "Total number of questions : " << totalQ << endl;
	cout << "Correct answer : " << correct << endl;
	cout << "Wrong answer : " << incorrect << endl;
	cout << "Skipped : " << skipped << endl;
}

void swtich(int selectCountry, int totalQ, string allQuestionsBulgaria[], string allQuestionsGermany[], string allOptionsGermany[10][4],string allQuestionsSpain[],string  allOptionsSpain[10][4],string correctAnsSpain[], string correctAnsGermany[], string allOptionsBulgaria[10][4], int selectedOption[], string correctAnsBulgaria[], int correct, int incorrect, int skipped, bool check2)
{
	
	switch (selectCountry)
	{
	case 1:
		
		selectOption(totalQ, allQuestionsBulgaria, allOptionsBulgaria, selectedOption, check2);
		
		if (check2 == 1)
		{
			break;
		}
		
		printCorrectOptions();
		
		compareQuestions(totalQ, allQuestionsBulgaria, allOptionsBulgaria, selectedOption, correctAnsBulgaria);
		printResult();
		result(totalQ, selectedOption, correctAnsBulgaria, allOptionsBulgaria, correct, incorrect, skipped);
		resetSelectedOption(selectedOption);
	
		break;

	case 2:
		selectOption(totalQ, allQuestionsGermany, allOptionsGermany, selectedOption, check2);
		if (check2 == 1)
		{
			break;
		}
		printCorrectOptions();
		compareQuestions(totalQ, allQuestionsGermany, allOptionsGermany, selectedOption, correctAnsGermany);
		printResult();
		result(totalQ, selectedOption, correctAnsBulgaria, allOptionsBulgaria, correct, incorrect, skipped);
		resetSelectedOption(selectedOption);
		
		break;

	case 3:
		selectOption(totalQ, allQuestionsSpain, allOptionsSpain, selectedOption, check2);
		if (check2 == 1)
		{
			break;
		}
		printCorrectOptions();
		compareQuestions(totalQ, allQuestionsSpain, allOptionsSpain, selectedOption, correctAnsSpain);
		printResult();
		result(totalQ, selectedOption, correctAnsSpain, allOptionsSpain, correct, incorrect, skipped);
		resetSelectedOption(selectedOption);
		
		break;

	
	}
}



int main()
{
  string allQuestionsBulgaria[10] = {    
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };
  
  
  string allQuestionsGermany[10] = {    // all the questions
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };
	
	string allQuestionsSpain[10] = {    // all the questions
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };
	
	string allOptionsBulgaria[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
	};
	
	string allOptionsGermany[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
	};
	
	string allOptionsSpain[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
	};
	
	string correctAnsBulgaria[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
	};
	
	string correctAnsGermany[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
	};
	
	string correctAnsSpain[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
	};

	int selectCountry;
	int selectedOption[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int totalQ = 10;
	
	
	
	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	
	string check1;
	string check2;
	
	while (true)
	{
		system("cls");
		printSelectCountry();
		cin >> selectCountry;
		if (selectCountry == 1 || selectCountry == 2 || selectCountry == 3 )
		{
			
		}
		else
		{
			cout << "Incorrect input!";
			break;
		}
		swtich(selectCountry, totalQ, allQuestionsBulgaria, allQuestionsGermany, allOptionsGermany, allQuestionsSpain, allOptionsSpain, correctAnsSpain, correctAnsGermany, allOptionsBulgaria, selectedOption, correctAnsBulgaria, correct, incorrect, skipped, check2);
		system("cls");
		if (check2 == 1)
		{
			return 0;
		}
		cout << "Would you like to continue?" << endl;
		cin >> check1;
		if (check1 == "No" || check1 == "no")
		{
			break;
		}

		
		
	}
	
	


}
