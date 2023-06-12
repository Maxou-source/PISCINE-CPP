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
 * @ Create Time: 2023-06-11 20:15:38
 */



#include "Bureaucrat.hpp"

/*======== CONSTRUCTORS ========*/

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150) {}
Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {}

Bureaucrat::Bureaucrat(std::string const & name, int grade)
{
    if (grade > 150)
        throw GradeTooHighException();
    else if (grade <= 0)
        throw GradeTooLowException();
    _name = name;
    _grade = grade;
}

/*++++ Overload = operator ++++*/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    this->_grade = rhs._grade;
    this->_name = rhs._name;
    return (*this);   
}

/*++++++++*/

/*===============================*/

/*======== MEMBER FUNCTIONS ========*/

void    Bureaucrat::promote(void)
{
    _grade--;
    if (_grade <= 0)
        throw GradeTooHighException();
}

void    Bureaucrat::downgrade(void)
{
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException();
}

void    Bureaucrat::signForm(const Form& f)
{
    if (_grade <= f.getGradeSign())
    {
        std::cout << _name << " signed " << f.getName() << std::endl;
    }
    else
    {
        std::cout << _name << "couldn't sign " << f.getName()
            << "because his grade was too low" << std::endl;
    }
}

/*===============================*/

/*======== STREAM OVERLOAD ========*/

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b)
{
    // name, bureaucrat grade grade.
    os << b.getName() << " bureaucrat grade " << b.getGrade() << ".";
    return (os);
}

/*===============================*/

