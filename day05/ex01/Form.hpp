/* 
$$      $$\ 
$$$\    $$$ |
$$$$\  $$$$ | $$$$$$\  $$\   $$\  $$$$$$\  $$\   $$\ 
$$\$$\$$ $$ | \____$$\ \$$\ $$  |$$  __$$\ $$ |  $$ |
$$ \$$$  $$ | $$$$$$$ | \$$$$  / $$ /  $$ |$$ |  $$ |
$$ |\$  /$$ |$$  __$$ | $$  $$<  $$ |  $$ |$$ |  $$ |
$$ | \_/ $$ |\$$$$$$$ |$$  /\$$\ \$$$$$$  |\$$$$$$  |
\__|     \__| \_______|\__/  \__| \______/  \______/

 * @ Author: Maxou
 * @ Create Time: 2023-06-11 20:27:14
 */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
    public:
    /*=== Constructors ===*/
        Form();
        Form(const Form&);

        Form(const std::string&, int, int);

		Form&	operator=(const Form&);

    /*=== Destructors ===*/
        ~Form() {}

    /*=== Getters ===*/
		const std::string&    getName(void) const;
		bool            getSign(void) const;
		int             getGradeSign(void) const;
		int             getGradeExecute(void) const;
    /*=== Member Functions ===*/
		void	beSigned(const Bureaucrat&);

	/*=== Exceptions ===*/
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw ()
				{
					return "Form::GradeTooHighException thrown";
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw ()
				{
					return "Form::GradeTooLowException thrown";
				}
		};

    private:
        std::string _name;
        bool        _sign;
        int         _gradeSign;
        int         _gradeExecute;
};

std::ostream& operator<<(std::ostream &os, const Form& f);

#endif