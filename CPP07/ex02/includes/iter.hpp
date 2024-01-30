
#ifndef ITER_HPP_
# define ITER_HPP_

# include <cstddef>

template<typename T>
void iter(T* arr, std::size_t lenght, void (*f)(const T&))
{
	std::size_t	i = 0;

	while (i < lenght)
	{
		f(arr[i++]);
	}
}

#endif
