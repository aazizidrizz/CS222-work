# Makefile for CS 222 Programming Assignment #3

program3_yourLoginName_firewall_log: main.o firewall_log.o
    gcc -g -o program3_aabdela4_firewall_log main.o firewall_log.o

main.o: main.c firewall_log.h
    gcc -g -c main.c

firewall_log.o: firewall_log.c firewall_log.h
    gcc -g -c firewall_log.c

clean:
    rm -f *.o program3_yourLoginName_firewall_log
