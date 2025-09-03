#include <string>

class Student {
private:
  std::string paterno;
  std::string materno;
  std::string nombres;
  std::string cui;

public:
  Student(const std::string& paterno, const std::string& materno, const std::string& nombres, const std::string& cui)
    : paterno(paterno), materno(materno), nombres(nombres), cui(cui) {}

  // Getters
  std::string getPaterno() const { return paterno; }
  std::string getMaterno() const { return materno; }
  std::string getNombres() const { return nombres; }
  std::string getCui() const { return cui; }

  // Setters
  void setPaterno(const std::string& p) { paterno = p; }
  void setMaterno(const std::string& m) { materno = m; }
  void setNombres(const std::string& n) { nombres = n; }
  void setCui(const std::string& c) { cui = c; }
};
