/* ************************************************************************ *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *    Copyright (C) 2017 by Daidson Fonseca Alves                           *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Nome Completo <daidson.alves@gmail.com>                               *
 *    Webpage: http://www.github.com/daidson                                *
 *    Phone: +55 (81) 99954-6310                                            *
 * ************************************************************************ *
 * 
 */

#include "libird.h"

int main(void)
{
    int a, b;

    scanf("%d, %d", &a, &b);

    a=a;
    b=b;

    if(a&&b)
        printf("A e B verdadeiro");
    else
        printf("A e B falso");
    if(a||b)
        printf("A e B verdadeiro");
    else
        printf("A e B falsO");
    if(!a)
        printf("Nao-A verdadeiro");
    else
        printf("Nao-A falso");
    if((a||b)&&!(a&&b))
        printf("A ou-exclusivo B verdadeiro");
    else
        printf("A ou-exclusivo B falso");
    if(!a||b)
        printf("A implica B verdadeiro");
    else
        printf("A implica B falso");
    if(a==b)
        printf("A se e somente se B verdadeiro");
    else
        printf("A se e somente se B falso");

    return 0;
}
