#include "fstream"
#include "iostream"
#include "istream"
#include "ostream"
#include "streambuf"

using namespace std;

int main() {
  ofstream os("foo.txt");
  // if (os.is_open()) {
  //  char data[] = "Kun Foo";
  //  os.write(data, 7);
  // }
  //
  // ofstream iofs;
  // iofs.open("foo.txt");
  
  ifstream is("foo.txt");
  string firstname, lastname;
  int age, bmonth, bday, byear;
  while (is >> firstname >> lastname >> age >> bmonth >> bday >> byear){
	     if (os.is_open())
			 os << firstname;
  }
  
}
