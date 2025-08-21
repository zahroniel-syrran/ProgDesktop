#include <string>
#include <cctype>
bool isVogal(char c){ c=std::tolower((unsigned char)c); return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }
int contaVogais(const std::string& s){ int cnt=0; for(char c:s) if(isVogal(c)) ++cnt; return cnt; }
