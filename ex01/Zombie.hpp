/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:47:09 by jelee             #+#    #+#             */
/*   Updated: 2025/11/07 18:48:15 by jelee            ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string _name;//change name only by setName and setName can do as filter

    public:
		Zombie(void);//basic generator. we need this to make array of zombies. 
        Zombie(std::string name);
        ~Zombie(void);

    void    announce(void);
	void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
