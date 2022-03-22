#include <iostream>
#include <Account.hpp>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";

	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void Account::displayStatus( void ) const {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";

	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void Account::makeDeposit( int deposit ) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";deposit:" << deposit;

	// calcs
	Account::_amount += deposit;
	Account::_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";withdrawal:" << withdrawal;

	if (Account::_amount - withdrawal < 0) {
		std::cout << ";refused" << std::endl;
		return false;
	}
	// calcs
	Account::_amount -= withdrawal;
	Account::_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

int	 Account::checkAmount( void ) const {
	return (this->_amount > 0);
}

void Account::_displayTimestamp( void ) {

	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[16];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << buf;
}
