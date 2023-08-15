#include <iostream>
#include <string>
#include <locale>

void DuckLIB_Quack(bool Option, std::string Text) {
	std::locale Locale;
	std::string Final_Text = "";
	for (std::string::size_type Counter = 0; Counter < Text.length(); Counter++) {
		if (Option) {
			Final_Text = Final_Text + std::toupper(Text[Counter], Locale);
		} else {
			Final_Text = Final_Text + std::tolower(Text[Counter], Locale);
		}
	}
	if (Option) {
		std::cout << Final_Text + "!!!" << std::endl;
	} else {
		std::cout << Final_Text << std::endl;
	}
}

void DuckLIB_Wait() {
	std::cin.get();
}
