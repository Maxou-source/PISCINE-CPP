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
 * @ Create Time: 2023-06-11 20:35:53
 */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*======== CONSTRUCTORS ========*/

Form::Form(): _name("unkwnon"), _sign(false), _gradeSign(150), _gradeExecute(150) {}

Form::Form(const Form& c):  _name(c._name), _sign(c._sign), _gradeSign(c._gradeSign), _gradeExecute(c._gradeExecute) {}

Form::Form(const std::string& name, int gs, int ge)
{
    _sign = false;
    _name = name;
    if (gs > 150 || ge > 150)
        throw GradeTooHighException();
    else if (gs <= 0 || ge <= 0)
        throw GradeTooLowException();
    _gradeSign = gs;
    _gradeExecute = ge;
}

/*++++ Overload = operator ++++*/

Form&   Form::operator=(const Form& rhs)
{
    this->_name = rhs._name;
    this->_sign = rhs._sign;
    this->_gradeExecute = rhs._gradeExecute;
    this->_gradeSign = rhs._gradeSign;
    return (*this);
}

/*++++++++*/

/*===============================*/

/*======== MEMBER FUNCTIONS ========*/

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= _gradeSign)
    {
        if (_sign == true)
            std::cout << "Warning:: all ready been signed" << std::endl;
        _sign = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

/*===============================*/

/*======== GETTERS ========*/

const std::string&    Form::getName() const
{
    return (_name);
}

bool    Form::getSign() const
{
    return (_sign);
}

int    Form::getGradeExecute() const
{
    return (_gradeExecute);
}

int    Form::getGradeSign() const
{
    return (_gradeSign);
}

/*===============================*/

/*======== STREAM OVERLOAD ========*/

std::ostream& operator<<(std::ostream &os, const Form& f)
{
    // name, bureaucrat grade grade.
    os << f.getName() << " form min sign " << f.getGradeSign()
        << " min execute " << f.getGradeExecute() << ".";
    return (os);
}

/*===============================*/