/* 
 * CS 222 Programming Assignment #3
 * Your Name: Ahmed Abdel-Aziz
 * This program reads a firewall log file and stores each log into a structure.
 */

#ifndef FIREWALL_LOG_H
#define FIREWALL_LOG_H

#include <stdio.h>

// Maximum size for each piece of text
#define STR_SIZE 80
// Maximum number of characters per line (log)
#define LINE_LEN 512

// Our "box" to hold log information (structure)
typedef struct {
    char event_start[STR_SIZE];
    char destination_ip[STR_SIZE];
    char destination_host[STR_SIZE];
    char source_ip[STR_SIZE];
    char source_host[STR_SIZE];
    int client_bytes;
    int server_bytes;
    int http_request_time;
    int http_response_time;
    char user_name[STR_SIZE];
    char event_outcome[STR_SIZE];
    char event_type[STR_SIZE];
    char event_category[STR_SIZE];
    char event_action[STR_SIZE];
} firewall_log_t;


int read_firewall_logs(const char *filepath, char logs[][LINE_LEN], int max_logs);

int parse_firewall_log(const char *log_line, firewall_log_t *log_entry);

void print_firewall_log(const firewall_log_t *log_entry);

#endif // FIREWALL_LOG_H
