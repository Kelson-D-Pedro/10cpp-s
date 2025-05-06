/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:49:58 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/06 19:11:58 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>
# include <iomanip>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    static int index;
    
    this->_amount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = index;
    _displayTimestamp();
    std::cout   << " index:" << index
                << ";amount:" << checkAmount()
                << ";created" << std::endl;
    index++;
    _nbAccounts++;
    _totalAmount += initial_deposit;

}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex
                << ";amount:" << checkAmount()
                << ";closed" << std::endl;
}

// ************************************************************************** //
//                               Static Atributes Classes                     //
// ************************************************************************** //

int Account::getTotalAmount(void)
{
    return (_totalAmount);   
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}


// ************************************************************************** //
//                               Info Classes                                 //
// ************************************************************************** //

void Account::_displayTimestamp(void)
{
    std::time_t now;
    std::tm*    _time;
    
    now = std::time(0);
    _time = std::localtime(&now);

    std::cout   << "["
    << (1900 + _time->tm_year)
    << std::setw(2) << std::setfill('0') << (_time->tm_mon + 1)
    << std::setw(2) << std::setfill('0') << _time->tm_mday
    << "_"
    << std::setw(2) << std::setfill('0') << _time->tm_hour
    << std::setw(2) << std::setfill('0') << _time->tm_min
    << std::setw(2) << std::setfill('0') << _time->tm_sec
    << "]";
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout   << " accounts:" << Account::_nbAccounts
                << ";total:" << Account::_totalAmount
                << ";deposits:" << Account::_totalNbDeposits
                << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";deposits:" << this->_nbDeposits
                << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


// ************************************************************************** //
//                               Operations Classes                           //
// ************************************************************************** //

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex
    << ";p_amount:" <<  this->_amount
    << ";deposit:" << deposit
    << ";amount:" << this->_amount + deposit
    << ";nb_deposits:" << ++this->_nbDeposits
    << std::endl;
    this->_amount += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout   << " index:" << this->_accountIndex
                    << ";p_amount:" <<  this->_amount
                    << ";withdrawal:" << "refused" << std::endl;
        return (false);
    }
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex
    << ";p_amount:" <<  this->_amount
    << ";withdrawal:" << withdrawal
    << ";amount:" << this->_amount - withdrawal
    << ";nb_withdrawals:" << ++this->_nbWithdrawals
    << std::endl;
    this->_amount -= withdrawal;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    return (true);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

