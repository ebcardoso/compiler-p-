#include "parserTokens.h"
#include "parserNaoRecursivo.cpp"

int main(int argc, char* argv[])
{
	if (argc > 1) {
		parse(argv[1]);
	}	
	return 0;
}
