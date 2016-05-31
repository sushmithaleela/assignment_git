#include "func.h"
bool match(char *first, char *second)

{

	if (*first == '\0' && *second == '\0')

		return true;
	
	if (*first == '*' && *(first+1) == '\0' && *second != '\0')
		
		return true;

	if (*first == '?' && *(first+1) == '\0' && *second == '\0')
		
		return true;

	if (*first == '*' && *(first+1) != '\0' && *second == '\0')

		return false;

	if (*first == '?' && *(first+1) == *second)

		return match(first+2, second+1);

	if (*first == '?' || *first == *second)

		return match(first+1, second+1);

	if (*first == '*')

		return match(first+1, second) || match(first, second+1);

	return false;

}
