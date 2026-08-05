#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void f(int t) {
    if (t) return f(t - 1);
}

void a(int sig) {
    _Exit(EXIT_FAILURE);
}

void b(int sig) {
    
}

int main(void) {
    f(100);
    signal(SIGINT, a);

    f(200);
    // exit(EXIT_FAILURE);

    close(STDIN_FILENO);
    close(STDOUT_FILENO);

    f(300);
    // int x = 0 / 0;
    // int x = *(int*)NULL;
    // abort();

    f(400);
    // raise(SIGINT);
    // kill(getpid(), SIGINT);

    f(500);
    signal(SIGINT, b);
    kill(getpid(), SIGINT);

    // f(-1);
    write(STDERR_FILENO, "-h", 2);
    return EXIT_SUCCESS;
}
