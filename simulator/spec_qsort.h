#ifndef _SPECQSORTH_
#define _SPECQSORTH_

#include <cstddef>

using namespace std;

static void spec_swap(void *x, void *y, size_t l);

static void spec_sort(char *array, size_t size, int begin, int end, int (*cmp)(const void*,const void*));

void spec_qsort(void *array, size_t nitems, size_t size, int (*cmp)(const void*,const void*));

#endif
