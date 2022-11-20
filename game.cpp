#include <iostream>
#include <windows.h>
#include <conio.h>



using namespace std;


void selectOptionBulgaira(int totalQ, string allQuestions[],string allOptions[10][4], int selectedOption[])
{
	for (int i = 0; i < totalQ; i++) {
		cout << "Question No: " << (i + 1) << endl;
		cout << allQuestions[i] << endl;
		cout << "1." << allOptions[i][0] << endl;
		cout << "2." << allOptions[i][1] << endl;
		cout << "3." << allOptions[i][2] << endl;
		cout << "4." << allOptions[i][3] << endl << endl;

		cout << "Select your answer as 1, 2, 3 or 4 here : ";
		cin >> selectedOption[i];
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
	int op;
	
	cout << "Select a country:" << endl;
	cout << "1.Bulgaria" << endl;
	cout << "2.Germany" << endl;
	cout << "3.Spain" << endl;
	cin >> selectCountry;
	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	
	switch(selectCountry)
	{
		case 1:
		selectOptionBulgaira(totalQ, allQuestionsBulgaria, allOptionsBulgaria, selectedOption);
		printCorrectOptions();
		compareQuestions(totalQ, allQuestionsBulgaria,  allOptionsBulgaria,selectedOption, correctAnsBulgaria);
		printResult();
		result(totalQ, selectedOption, correctAnsBulgaria, allOptionsBulgaria, correct, incorrect, skipped);
		break;
			
		case 2:
		selectOptionBulgaira(totalQ, allQuestionsGermany, allOptionsGermany, selectedOption);
		printCorrectOptions();
		compareQuestions(totalQ, allQuestionsGermany, allOptionsGermany, selectedOption, correctAnsGermany);
		printResult();
		result(totalQ, selectedOption, correctAnsBulgaria, allOptionsBulgaria, correct, incorrect, skipped);
		break;
		case 3:
		default:;
	}
	
	


}
