#include <iostream>
#include <windows.h>
#include <conio.h>



using namespace std;

bool check2;

void selectOption(int totalQ, string allQuestions[],string allOptions[10][4], int selectedOption[], bool check2)
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
			check2 = true;
			i = 9;
			
		}
		system("cls");
	}
}
void resetSelectedOption(int selectedOption[])
{
	for (int i = 0; i < 10; i++)
	{
		selectedOption[i] = 0;
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
void printSelectCountry()
{
	
	cout << "Select a country:" << endl;
	cout << "1.Bulgaria" << endl;
	cout << "2.Germany" << endl;
	cout << "3.Spain" << endl;
	
	
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
	"Which is the biggest city in this country?",
	"Which is the capital of Bulgaria?",
	"Who created Bulgaria?",
	"When was Bulgaria created?",
	"Who was his son?",
	"Who is the father of the creator of this country?",
	"How is our sea called?",
	"How is a soup of yoghurt called in Bulgaria?",
	"Is shkembe chorba good?",
	"Was the test difficult?" };
  
  
  string allQuestionsGermany[10] = {    // all the questions
	"What form of government is Germany?",
	"What is the capital of Germany?",
	"What currency is used in Germany?",
	"Who is the chancellor of Germany?",
	"What colours are on the flag of Germany?",
	"How many official languages are there in Germany?",
	"How many countries share a border with Germany (+ 1 bonus point per country)?",
	"What is the name for Germany in the German language?",
	"How is the highway system called in Germany?",
	"What was the Deutschmark?" };
	
	string allQuestionsSpain[10] = {    // all the questions
	"What is the capital of Spain?"
	"Which currency is used in Spain?"
	"Who was the King of Spain in 2020?"
	"Which countries share a land border with Spain?"
	"How do you say Spain in Spanish?"
	"When is Spain’s national day?"
	"Who is the head of State in Spain?"
	"What is the longest river passing in Spain?"
	"How many autonomous communities are there in Spain?"
	"What was Queen Letizia’s job at CNN+ and TVE?" };
	
	string allOptionsBulgaria[10][4] = {    // all options
	{"Sofia","Vatican city","Varna","Tuvalue"},
	{"Burgas","Sofia","Tokiyo","None of them"},
	{"Aristotol","Neuton","Anaximander","Khan Asparuh"},
	{"5 March 556","1245","681","12 June 680"},
	{"Tomas alva","George King","Tervel","Nil Armstrong"},
	{"Thomson","Kubrat","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Black sea","Atlantic","Kohen"},
	{"Supa","Moscow","Tarator","California"},
	{"Yes","Yes","Yes","Yes"},
	{"Yes","No","Ok","3"},
	};
	
	string allOptionsGermany[10][4] = {    // all options
	{"Maldivs","Berlin","Fizi","Tuvalue"},
	{"Federal Republic","Havana","Tokiyo","None of them"},
	{"5 March","11 july","Euro","Lev"},
	{"Angela Merkel","Neuton","Anaximander","Thales"},
	{"Tomas alva","Black, Red and Gold. ","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","One. German."},
	{"Jems watt","Denmark, Poland, Czech Republic, Switzerland, Austria, France, Luxembourg, the Netherlands and Belgium","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Deutschland","California"},
	{"France","Italy","Spain","Autobahn"},
	{"Arctic","Pacific","Indian ocean","The currency in Germany before euro."},
	};
	
	string allOptionsSpain[10][4] = {    // all options
	{"Maldivs","Madrid","Fizi","Tuvalue"},
	{"Buenes aires","Lev","Euro","None of them"},
	{"Felipe VI","11 july","Borisov","12 June"},
	{"Aristotol","Morocco, Andorra, France, Portugal, and Gibraltar","Anaximander","Thales"},
	{"Tomas alva","España","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","12th of October"},
	{"Jems watt","The King","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Rio Tejo (River Tagus)","California"},
	{"17","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","News Anchor","Atlantic"},
	};
	
	string correctAnsBulgaria[10] = {    // correct options
		"Sofia","Sofia","Khan Asparuh","681",
		"Tervel","Kubrat","Black sea",
		"Tarator","Yes","No"
	};
	
	string correctAnsGermany[10] = {    // correct options
		"Berlin","Federal Republic","Euro","Anaximander",
		"Black, Red and Gold.","One. German.","Denmark, Poland, Czech Republic, Switzerland, Austria, France, Luxembourg, the Netherlands and Belgium",
		"Deutschland","Autobahn","The currency in Germany before euro."
	};
	
	string correctAnsSpain[10] = {    // correct options
		"Madrid","Euro","Felipe VI","Morocco, Andorra, France, Portugal, and Gibraltar",
		"España","John Dalton","Jems watt",
		"Rio Tejo (River Tagus)","Italy","News Anchor"
	};

	int selectCountry;
	int selectedOption[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int totalQ = 10;
	
	
	
	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	
	string check1;
	
	
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
