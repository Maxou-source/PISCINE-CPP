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
 * @ Create Time: 2023-05-09 14:49:00
 */

#include "Account.hpp"
#include <iomanip>
#include <sstream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* ==== UTILS ==== */

void Account::_displayTimestamp()
{
    std::time_t now = std::time(NULL);
    std::tm timeinfo = *std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", &timeinfo);
    std::cout << buffer;
}

/* === Build & DeBuild */

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts++;
	// Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
	Account::_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}
//  index:7;amount:8942;closed
Account::~Account()
{
	std::cout << " index:" << _accountIndex << ";amount:" << _amount<< ";closed" << std::endl;
}

/* === Functions === */

void	Account::displayAccountsInfos(void)
{
	// Account::_displayTimestamp();
	int account = Account::_nbAccounts;
	std::cout << " accounts:" << account << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const /* promet de ne pas modifier les membres de la classe */
{
	// Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	// Account::_displayTimestamp();
	int amount = Account::_amount;
	Account::_amount += deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << " index:" << Account::_accountIndex << ";p_amount:" << amount << ";deposit:" << deposit;
	std::cout <<  ";amount:" << Account::_amount << ";nb_deposits:" << Account::_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int amount = Account::_amount;
	std::cout << " index:" << Account::_accountIndex << ";p_amount:" << amount << ";withdrawal:" << std::flush;
	if (withdrawal < Account::_amount)
	{
		_amount -= withdrawal;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << ++Account::_nbWithdrawals << std::endl;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return true;
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

/* === GETTERS ===*/

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}


