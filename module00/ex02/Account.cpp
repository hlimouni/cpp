#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ) {}

Account::Account(int initial_deposit)
	:  _accountIndex(getNbAccounts()),
	   _amount(initial_deposit),
	   _nbDeposits(0),
	   _nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << '\n';
    Account::_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << '\n';
};

int Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int     Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int     Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals() << '\n';
}

void	Account::makeDeposit( int deposit ) {
    if (deposit > 0) {
    	int p_amount = _amount;
		_amount += deposit;
		Account::_totalNbDeposits += 1;
		_nbDeposits += 1;
		Account::_totalAmount += deposit;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
				  << ";deposit:" << deposit << ";amount:" << _amount
				  << ";nb_deposits:" << _nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal( int withdrawal ) { 
    if (withdrawal < 0 || withdrawal > _amount ) {
    	_displayTimestamp();
		std::cout << "index" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
    int p_amount = _amount;
    _amount -= withdrawal;
    _nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
			  << ";withdrawal:" << withdrawal << ";amount:" << _amount
			  << ";nb_deposits:" << _nbWithdrawals << std::endl;
    return true;
}

// int		Account::checkAmount(void) const { 
//     return _amount;
// }

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::_displayTimestamp( void ) {
	char buff[20];
    time_t now = time(0);
    std::strftime(buff, 20, "[%Y%m%d_%H%M%S]", localtime(&now));
    std::cout << buff << ' ';
}
