
#ifndef DATA_HPP_
# define DATA_HPP_

# include <cstdint>

class Data
{
	public:
		~Data();
		Data();
		Data(const Data& other);
		Data& operator=(const Data& other);

		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
	private:
};

#endif
