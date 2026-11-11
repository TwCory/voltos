// SPDX-License-Identifier: BSD-3-Clause

/*
 *	lib/argv_split.c
 *
 */

static int count_argc(const char *str)
{
	int count = 0;
	bool was_space;

	for (was_space = true; *str; str++) {
		if (is_space(*str)) {
			was_space = true;
		} else if (was_space) {
			was_space = false;
			count++;
		}
	}

	return count;
}

void argv_free(char **argv)
{
	argv--;
	vs_free(argv[0]);
	vs_free(argv);
}

char **argv_split(unsigned int mask, const char *str, int *argc_ptr)
{

}
