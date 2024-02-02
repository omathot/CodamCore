/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:27:17 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/28 11:16:31 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// ----------------------------------------------------------------------------------
//								NEEDED SHIT
// ----------------------------------------------------------------------------------
// static declared in header file, don't put static in .cpp
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

void	Account::_displayTimestamp()
{
    std::time_t	result = std::time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
		<< std::setw(2) << 1 + std::localtime(&result)->tm_mon
		<<  std::setw(2) << std::localtime(&result)->tm_mday
		<<  "_"
		<<  std::setw(2) << std::localtime(&result)->tm_hour
		<<  std::setw(2) << std::localtime(&result)->tm_min
		<<  std::setw(2) << std::localtime(&result)->tm_sec 
		<< "] " << std::flush;
}

// ----------------------------------------------------------------------------------
//						Constructor/Deconstructor
// ----------------------------------------------------------------------------------

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
    		<< "amount:" << _amount << ";"
    		<< "created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "closed" << std::endl;
}

// ----------------------------------------------------------------------------------
// 								DISPLAY
// ----------------------------------------------------------------------------------

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			<< "total:" << getTotalAmount() << ";"
			<< "deposits:" << getNbDeposits() << ";"
			<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}

// ----------------------------------------------------------------------------------
// 								DEPOSIT/WITHDRAW
// ----------------------------------------------------------------------------------

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";" << std::flush;
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";"
			<< "amount:" << _amount << ";"
			<< "nb_deposit:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	successful;		// try to have only 1 return statememt, gets convoluted with more classes and inhertence otherwise

	successful = false;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "withdrawal:" << std::flush;
	if (withdrawal > _amount)
		std::cout << "refused" << std::endl;
	else
	{
		std::cout << withdrawal << ";" << std::flush;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << "amount:" << _amount << ";"
				<< "nb_deposit:" << _nbDeposits << std::endl;
		successful = true;
	}
	return (successful);
}
