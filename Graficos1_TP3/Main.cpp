#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#define WITDH 640
#define HEIGHT 480

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	if (!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
	}

	display = al_create_display(WITDH, HEIGHT);
	if (!display) {
		fprintf(stderr, "failed to create display!\n");
		return -1;
	}

	al_init_primitives_addon();

	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_filled_rectangle(0, 0, 50, 50, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(WITDH - 50, 0, WITDH, 50, al_map_rgb(0, 255, 0));

	al_flip_display();

	al_rest(10.0);

	al_destroy_display(display);

	return 0;
}