##
## Makefile for Test in .
## 
## Made by Benoit Hamon
## Login   <hamon_e@epitech.net>
## 
## Started on  Wed Jan 11 07:56:37 2017 Benoit Hamon
## Last update Wed Jan 11 07:58:44 2017 Benoit Hamon
##

all:
	g++ *.cpp -std=c++03 -g3 -Wall -pthread -l gtest
