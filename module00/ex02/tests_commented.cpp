// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {
// ***************************************** //
//             The accounts                  //
// ***************************************** //

	//accounts_t is a vector of type  Account
	typedef std::vector<Account::t>							  accounts_t;

	//ints_t is a vector of type int
	typedef std::vector<int>								  ints_t;

	//acc_int_t is a pair of two vector iterators (addresses):
	// * acounts_t iterator 
	// * ints_t iterator
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	//amounts is a c style int array with 8 elements
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };

	//amounts_size is a size_t, it equals 8
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );

	//here's the vector of accounts initialized with (begin, end)
	//so for every element to be initialized,
		//the constructor is called with the appropriate init value:
		//(Account(42) and Account(54) ... etc)
	accounts_t				accounts( amounts, amounts + amounts_size );

	//acc_begin: iterator holding the begin of the vector
	accounts_t::iterator	acc_begin	= accounts.begin();

	//acc_end: iterator holding the end of the vector
	accounts_t::iterator	acc_end		= accounts.end();

// ***************************************** //
//             The deposits                  //
// ***************************************** //

	//array with 8 elements called d
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };

	//d_size = 8 is the size of d
	size_t const		d_size( sizeof(d) / sizeof(int) );

	//vector of integers holding d values
	ints_t				deposits( d, d + d_size );

	//dep_begin: iterator holding the begin of the vector;
	ints_t::iterator	dep_begin	= deposits.begin();

	//dep_end: iterator holding the end of the vector;
	ints_t::iterator	dep_end		= deposits.end();

// ***************************************** //
//             The withdrawals               //
// ***************************************** //

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

//Now with the main code//

	//calling the static function of class account:
	Account::displayAccountsInfos();

	//call displayStatus for every account
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//loop through each pair of ( account, deposit )
	//and for every account object: 
		//call its member function makeDeposit()
		//and the give it the index equivalent deposit integer as argument
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//call makewithdrawal(withdrawal) for every account object
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
