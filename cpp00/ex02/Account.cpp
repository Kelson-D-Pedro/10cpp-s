/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:49:58 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/06 18:25:02 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>
# include <iomanip>

Account::Account(int initial_deposit)
{
    this->_amount += initial_deposit;
    
}

// ************************************************************************** //
//                               Static Atributes Classes                     //
// ************************************************************************** //

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);   
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
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
    
}