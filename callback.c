#include<stdio.h>
#include<stdlib.h>

char *NOTIFY_OPTION = "log_file, mail, txtmsg";

void log_file(char *content, char *subject, char *dest_address);
void send_email(char *content, char *subject, char *dest_address);
void send_txtmsg(char *content, char *subject, char *dest_address);

void exception_notify(, void (*)(char *, char *, char *), );


int main() 
{
	


