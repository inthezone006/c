#include <stdio.h>
#include <signal.h>

void sig_handler(int sig) {
    printf("Got signal!");
}

int main() {
    signal(custom_signal, sig_handler);
    if (2 < 3) {
        raise(custom_signal);
    }
}