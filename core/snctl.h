#ifndef _SNCTL_H_
#define _SNCTL_H_

struct client;
struct snobj;

struct snobj *handle_request(struct client *c, struct snobj *q);

#endif
