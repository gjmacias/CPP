
#ifndef EX01_BRAIN_HPP_
# define EX01_BRAIN_HPP_

# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& other);
		virtual ~Brain(void);

		Brain& operator=(const Brain& other);

		std::string		getIdea(unsigned int n) const;
		void			setIdea(unsigned int n, std::string idea);
		static int		getConstant(void);
	private:
		static const int	NIdeas = 100;
		std::string			ideas[NIdeas];
};

#endif
