#include <iostream>
#include <cstring>

class Cl
{
public:
    Cl(int x) : number(x) {}
    void setAnnotation(char *b) {memcpy(buff, b, strlen(b));}
    virtual int operator+(Cl &r) {return number + r.number;}
    virtual int operator-(Cl &r) {return number - r.number;}
private:
    char buff[100];
    int number;
};

int		main(int argc, char **argv)
{
	if (argc <= 1)
		_exit(1);
	Cl *i = new Cl(5);
	Cl *j = new Cl(6);
	Cl &k = *i;
	Cl &l = *j;
	i.setAnnotation(argv[1]);
	return k + l; 
}
