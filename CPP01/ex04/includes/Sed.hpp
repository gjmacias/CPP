#ifndef EX04_SED_HPP_
# define EX04_SED_HPP_

#include <string>

class Sed {
	public:
		Sed(void);
		~Sed(void);

		static int			replace(std::string const filename, std::string const s1, std::string const s2);
	private:
		static std::string	_strReplace(std::string line, std::string const s1, std::string const s2);
};

#endif
