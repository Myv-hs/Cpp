#include <iostream>
#include <vector>
#include <cmath>

std::string CeasarCipher (
	std::string str,
	int change,
	bool direction);


int main() {
	std::string theString = "AbCd XyZ";
	std::string encrypted = CeasarCipher(theString, 5, true);
	std::string decrypted = CeasarCipher(encrypted, 5, false);

	std::cout << "encrypted : " << encrypted <<std::endl;
	std::cout << "decrypted : " << decrypted <<std::endl;
}

std::string CeasarCipher (std::string str, int change, bool direction) {
	std::string out = "";
	int dir = direction*2-1;

	for(int i=0; i<str.size();i++) {
		std::cout<<str[i]<<std::endl;
		if(isalpha(str[i])){
			
			char p = (islower(str[i])) ? 'a' : 'A';
			int cc = (int)str[i] -p;
			
			cc = (( cc + change*dir ) % 26);
			if (cc<0) cc=26+cc;
			
			out = out+(char)(cc+p);

		} else if (isspace(str[i])) out = out+' ';
	}
	return out;
}