
#include "func.h"
int main()

{
   
        char *a=(char*)"s*i";

	char *c=(char*)"s?wa?i";

     	char *b=(char*)"swati";

	char *d=(char*)"swatibhat";

	char *e=(char*)"swa*ya";

	char *f=(char*)"swati?hat";

	char *g=(char*)"s*wa?ibha*t";

	char *h=(char*)"swati*";

	char *i=(char*)"swatibhat?";

	char *j=(char*)"swati?bha?t";

	

     	test(a, b); 

	test(c, b); 

	test(e, d);

	test(f, d);

	test(g, d);

	test(h, d);

	test(i, d);

	test(j, d);

  return 0;
}
