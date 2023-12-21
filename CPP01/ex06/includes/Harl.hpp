#ifndef EX05_HARL_HPP_
# define EX05_HARL_HPP_

#include <string>

class Harl {
	public:
		Harl(void);
		~Harl(void);

		void complain (std::string level);
	private:
		static const int	_levels = 4;
		void 				debug (void);
		void 				info (void);
		void				warning (void);
		void 				error (void);
		typedef void		(Harl::*f)();
};

#endif
