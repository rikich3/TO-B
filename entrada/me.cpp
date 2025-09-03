#include <iostream>
#include "student.cpp"

int main() {
	// Cambia estos datos por los tuyos
	std::string paterno = "Chambilla";
	std::string materno = "Perca";
	std::string nombres = "Ricardo";
	std::string cui = "20232184";

	Student me(paterno, materno, nombres, cui);
	std::cout << me.getCui() << "-" << me.getPaterno() << "/" << me.getMaterno() << "," << me.getNombres() << std::endl;
	return 0;
}

