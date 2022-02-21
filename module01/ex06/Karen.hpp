#ifndef KAREN_H
#define KAREN_H

# include <iostream>

class Karen  {

	private:

		std::string _levels[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	
	public:
		Karen();
		~Karen();

		typedef void( Karen::*levels )( void );
		int 	getLevelIndex( std::string const level ) const;
		void 	complain( std::string level );

};
#endif