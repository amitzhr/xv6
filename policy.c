#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf(2, "Invalid number of parameters!\n");
		return 0;
	}

	int policy = atoi(argv[1]);
	if (policy < 0 || policy > 2) {
		printf(2, "Invalid policy number!\n");
		return 0;
	}

	setp(policy);
	return 0;
}