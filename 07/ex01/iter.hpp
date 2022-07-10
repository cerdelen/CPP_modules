#ifndef ITER_H
#define ITER_H

template <typename T>
void	iter(T* arr, int n, void (*func)(T &elem)){
	for (int i = 0; i < n; i++)
		(*func)(arr[i]);
}

#endif