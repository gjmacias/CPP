
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

namespace MyUtilities
{
    bool isNumeric(const std::string &str);
}
	
class Contact
{
	private:
		enum 		fields
		{
			FirstName = 0,
			LastName,
			Nickname,
			Phone,
			Secret
		};

		int					index;
		static const int	FIELDS_COUNTER = 5;
		std::string			fieldsInfo[FIELDS_COUNTER];
	public:
		Contact();
		virtual ~Contact();

		bool	setString(const char *s, fields field);
		bool	setNumber(const char *s, fields field);
		void	setInformation(int id);
		void	tableDisplay(void);
		void	displayContact(void);
};

#endif
