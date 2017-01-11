#include <string>

namespace mine {
  class Test {
    private:
      std::string _string;
      int _nbr;

    public:
      Test(std::string const &string, int nbr);
      int getNbr();
      std::string getStr();
      void aff();
  };
}
