#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
	public:
    	Fixed();
    	Fixed(Fixed const & src);
    	Fixed(const int val);
    	Fixed(const float val);
    	~Fixed();
		bool  operator > (const Fixed& original) const;
    	bool  operator < (const Fixed& original) const;
    	bool  operator >= (const Fixed& original) const;
    	bool  operator <= (const Fixed& original) const;
    	bool  operator == (const Fixed& original) const;
    	bool  operator != (const Fixed& original) const;
    	Fixed  operator + (const Fixed& original) const; 
    	Fixed  operator - (const Fixed& original) const; 
    	Fixed  operator * (const Fixed& original) const; 
    	Fixed  operator / (const Fixed& original) const;
    	Fixed& operator++(void);
    	Fixed operator++(int);
    	Fixed& operator--(void);
    	Fixed operator--(int);
    
		Fixed & operator = (Fixed const & rhs);
    	int   getRawBits(void) const;
    	void  setRawBits(int const raw);
    	int   toInt(void)const;
    	float toFloat(void)const;
    	static Fixed& min(Fixed& p1, Fixed& p2);
		static Fixed& max(Fixed&p1, Fixed& p2);
		static const Fixed& min(const Fixed& p1, const Fixed& p2);
		static const Fixed& max(const Fixed& p1, const Fixed& p2);
	private:
    	int	_value;
    	static const int _bits = 8;
  
};

std::ostream & operator<<(std::ostream & out, Fixed const & fixed);

#endif