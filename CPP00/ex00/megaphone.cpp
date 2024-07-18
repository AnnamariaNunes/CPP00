/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annamarianunes <annamarianunes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:05:05 by annamarianu       #+#    #+#             */
/*   Updated: 2024/07/15 16:36:07 by annamarianu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //usada para operaçoes de entrada e saida
#include <string> //usada para manipulaçao de strings
#include <cctype>//usada para manipulaçao de caracteres


//exercicio1 
//$>./megaphone "shhhhh... I think the students are asleep..."
//SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
//$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
//DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
//$>./megaphone
//* LOUD AND UNBEARABLE FEEDBACK NOISE *
//$>


// std::cout - usado para imprimir na tela
// std::cin - usado para receber dados do usuario
// std::endl - usado para pular uma linha
//  std::string - usado para manipular strings
int main(int argc, char **argv)
{
    if(argc == 1)//se não tiver nenhum argumento ele vai imprimir apenas essa frase e vai pular linha.
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
        return 0;
    }
    for(int i = 1; i < argc; i++)//começa do 1 porque o argc[0] é o nome do arquivo
    {
        std::string str = argv[i];//convertendo para string
        for(size_t j = 0; j < str.length(); j++)//começa do 0 e vai até o tamanho da string
        {
           str[j] = std::toupper(str[j]);//converte para maiusculo
        }
        std::cout << str << " ";//imprime a string e um espaço
    }
    std::cout << std::endl;
    return 0;
}