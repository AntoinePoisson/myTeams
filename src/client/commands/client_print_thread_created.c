/*
** EPITECH PROJECT, 2020
** NWP_myteams_2019
** File description:
** 316
*/

#include "client.h"
#include "logging_client.h"

int cmd_316(char **tab)
{
    if (tab && tab[0] && tab[1] && tab[2] && tab[3] && tab[4])
        client_print_thread_created(tab[0], tab[1], (time_t)atoi(tab[2]),
            tab[3], tab[4]);
    return (0);
}