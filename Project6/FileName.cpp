#include<iostream>
#include<vector>
#include<string>
#include <algorithm>

struct Person {
	std::string first_name;
	std::string last_name;
	int age;
};

int main() {

	std::vector<Person> people = {
	{"Yoda", "", 900},
	{ "Obi-Wan", "Kenobi", 38 },
	{"Leia", "Organa", 25},
	{"Anakin", "Skywalker", 22} };

	int comparisons{ 0 };

	std::sort(people.begin(), people.end(),

	[&comparisons](const auto& a, const auto& b) {
		
		++comparisons;

		
		return (a.first_name < b.first_name);
		
		});
	std::cout << "Comparisons: " << comparisons << '\n';

	for (const auto& Person : people)
	{
		std::cout << Person.first_name << Person.last_name << Person.age << '\n';
	}
	

	return 0;
}