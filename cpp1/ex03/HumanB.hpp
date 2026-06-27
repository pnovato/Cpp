/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:43:35 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:43:55 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
        public:
                HumanB(std::string human);
                ~HumanB(void);
				void setWeapon(Weapon& type);
                void attack(void);
        private:
                Weapon* _pvtWpB;
                std::string _nameB;
};

#endif
