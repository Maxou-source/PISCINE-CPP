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
 * @ Create Time: 2023-06-11 20:15:22
 */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class Bureaucrat
{
    public:
        /*=== Constructors ===*/
        Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat(std::string const &, int);

        Bureaucrat& operator=(const Bureaucrat& rhs);

        /*=== Getters ===*/
        const std::string&    getName(void) const {return _name;}
        int             getGrade(void) const {return _grade;}
        
        /*=== Destructors ===*/
        ~Bureaucrat() {}

        /*=== Member fucntions ===*/
        void    promote();
        void    downgrade();
        void    signForm(const Form&);
        
        /*=== Exceptions ===*/
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw ()
                {
                    return "Bureaucrat::GradeTooHighException thrown";
                }
        };
        
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw ()
                {
                    return "Bureaucrat::GradeTooLowException thrown";
                }
        };
    
    private:
        std::string _name;
        int _grade;
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b);

#endif