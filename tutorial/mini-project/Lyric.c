#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// definisikan struct
struct LyricParams {
  const char *lyric;
  float delay;
  float speed;
};

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void animate_text(const char *text, float delay) {
  pthread_mutex_lock(&lock);
  for (int i = 0; i < strlen(text); i++) {
    putchar(text[i]);
    fflush(stdout);
    usleep(delay * 1000000); // konversi detik ke mikro detik
  }
  putchar('\n');
  pthread_mutex_unlock(&lock);
}

void *sing_lyric(void *arg) {
  struct LyricParams *params = (struct LyricParams *)arg;

  usleep(params->delay * 1000000);
  animate_text(params->lyric, params->speed);
  free(params);
  return NULL;
}

void output_lirik() {
  struct Lyric {
    const char *text;
    float speed;
  } lyrics[] = {{"\njantung berdetak kencang dan tak terkendali", 0.09},
                {"keringat mengucur deras tak berhenti", 0.09},
                {"muka memerah seperti habis berlari", 0.08},
                {"aku tak bisa jadi pemberani\n", 0.15}};

  float delays[] = {0.3, 2.5, 5.8, 9.5};
  pthread_t threads[5];

  for (int i = 0; i < 5; i++) {
    struct LyricParams *params = malloc(sizeof(struct LyricParams));
    if (params == NULL) {
      perror("Failed to allocate memory");
      exit(EXIT_FAILURE);
    }
    params->lyric = lyrics[i].text;
    params->delay = delays[i];
    params->speed = lyrics[i].speed;

    if (pthread_create(&threads[i], NULL, sing_lyric, params) != 0) {
      perror("Failed to create thread");
      exit(EXIT_FAILURE);
    }
  }

  for (int i = 0; i < 5; i++) {
    pthread_join(threads[i], NULL);
  }
}

int main() {
  output_lirik();
  return 0;
}
