#include <unistd.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>


int main() {
    ALLEGRO_DISPLAY *display = nullptr;

    if(! al_init()){
        al_show_native_message_box(nullptr, nullptr, nullptr, "failed to init allegro!", nullptr,0);

        return -1;
    }
    display = al_create_display(640, 640);

    if(!display){
        al_show_native_message_box(nullptr, nullptr, nullptr, "failed to init allegro!", nullptr,0);

        return -1;
    }

    bool quit = false;

    while(!quit){
        sleep(5);
        quit = true;
    }

    al_destroy_display(display);
    return 0;
}
