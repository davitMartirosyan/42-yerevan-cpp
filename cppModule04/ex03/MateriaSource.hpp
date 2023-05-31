/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:42:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 22:21:01 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* inventory[4];
    public:
        MateriaSource( void );
        MateriaSource(const MateriaSource& op);
        MateriaSource& operator=(const MateriaSource& op);
        virtual ~MateriaSource();
    public:
        void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
};

#endif