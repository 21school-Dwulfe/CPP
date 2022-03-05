/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:53:05 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/05 23:58:18 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    std::cout
        <<"index:"
        <<this->_accountIndex
        << ";"
        <<"amount:"
        << this->_amount
        << ";"
        <<"created"
        <<std::endl;
    _nbAccounts++;
}

Account::~Account( void )
{
    std::cout
        <<"index:"
        <<this->_accountIndex
        << ";"
        <<"amount:"
        << this->_amount
        << ";"
        <<"closed"
        <<std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    std::cout
        << "accounts:"
        << getNbAccounts()
        << ";"
        << "total:"
        << getTotalAmount()
        << ";"
        << "deposits:"
        << getNbDeposits()
        << ";"
        << "withdrawals:"
        << getNbWithdrawals()
        << ";"
        << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    std::cout 
        << "index:"
        << this->_accountIndex
        << ";"
        << "p_amount:"
        << checkAmount()
        << ";"
        << "deposit:"
        << deposit
        << ";"
        << "amount:"
        << checkAmount() + deposit
        << "nb_deposits:"
        << this->_nbDeposits
        << ";"
        << std::endl;
    this->_amount += deposit;
    
}

bool	Account::makeWithdrawal( int withdrawal )
{ 
    std::cout
            << "index:"
            << this->_accountIndex
            << ";"
            << "p_amount:"
            << checkAmount()
            << ";";
    if (withdrawal > this->_amount)
        std::cout << "withdrawal:refused"<< std::endl;
    else
    {
        this->_nbWithdrawals++;
        std::cout
           << "withdrawal:"
           << withdrawal
           << ";"
           << "amount:"
           << checkAmount() - withdrawal
           << "nb_withdrawals:"
           << this->_nbWithdrawals
           << std::endl;
        this->_amount -= withdrawal;
        
    }
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    std::cout
        << "index:"
        << this->_accountIndex
        << "amount:"
        << checkAmount()
        << "deposits:"
        << this->_nbDeposits
        << "withdrawals:"
        << this->_nbWithdrawals
        << std::endl;
}
