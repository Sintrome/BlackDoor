#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::cin;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void print(string text) 
{
	cout << text << "\n";
}
void type(const string& text, unsigned int millis_per_char)
{
	for (const char c : text)
	{
		cout << c << flush;
		sleep_for(milliseconds(millis_per_char));
	}
}
int main()
{
	string art1 = " \/-----------\\\n |   _____   |\n |  /     \\  |\n | | () () | |\n |  \\  ^  /  |\n |   |||||   |\n \\___________/\n";
	string art2 = "\n /-----------\\\n |   __|||||||\n |  /  |||||||\n | | ()|||||||\n |  \\  |||||||\n |   |||||||||\n \\_____||||||/\n";
	type(art1, 30);
	type("What is life's greatest illusion? ", 90);
	string answer;
	getline(cin, answer);

	if (answer.find("nnocence") != string::npos)
	{
		type("Welcome...Home", 90);
		type(art2, 30);
		sleep_for(milliseconds(5000));

	}
	else if (answer.find("arrie") != string::npos)
	{
		type("You are not Worthy.", 90);
		sleep_for(milliseconds(5000));
	}
	else if (answer.find("appi") != string::npos or answer.find("appy") != string::npos)
	{
		type("You are not Worthy.", 90);
		sleep_for(milliseconds(5000));
	}
	else
	{
		type("...", 600);
		sleep_for(milliseconds(2000));
	}



}

