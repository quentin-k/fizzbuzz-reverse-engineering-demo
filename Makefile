# Makefile for fizzbuzz

CC = gcc

CFLAGS = -Wall

fizzbuzz: checkcases.o fizzbuzz.o
	$(CC) -o $@ $^

checkcases.o: checkcases.c
	$(CC) $(CFLAGS) -o $@ -c $<

fizzbuzz.o: fizzbuzz.c
	$(CC) $(CFLAGS) -o $@ -c $<
