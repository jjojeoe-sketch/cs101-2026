#include <stdio.h>
#include <string.h>

typedef struct movie {
    char name[32];
    int ranking;
} movie_t;

void fill_movie(movie_t* m) {
    strcpy(m->name, "BE ALL YOU CAN BE!");
    m->ranking = 1;
}

int main() {
    movie_t mymovie;
    fill_movie(&mymovie);

    printf("name = %s\n", mymovie.name);
    printf("ranking = %d\n", mymovie.ranking);
    return 0;
}
