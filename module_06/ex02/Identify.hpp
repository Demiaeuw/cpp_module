/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:48:59 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 06:50:50 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate();
void identify(Base* p);
void identify(Base& p);