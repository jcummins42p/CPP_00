/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:07:00 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/27 17:24:27 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include Account.hpp

Account::Account(int initial_deposit)
{
	_nbAccounts = 0;
	_totalAmount = initial_deposit;
	_totalNbDeposits = 1;
	_totalNbWithdrawals = 0;
	return ;
}

Account::~Account(void)
{
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
}

void	Account::makeWithdrawal(int withdrawal)
{
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
}

int	Account::checkAmount(void) const
{
	
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _nbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _nbWithdrawals;
}

void	Account:displayAccountsInfos(void)
{

}
