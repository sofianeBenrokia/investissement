#ifndef __INIT_HPP__
#define __INIT_HPP__

#include <string>

struct Init_window_and_render
    {
        ~Init_window_and_render();

        void clear();

        void new_window_and_render(char const *name , int x , int y , int w , int h , int mode);
    };

void init_texture();

void init_text();

#endif