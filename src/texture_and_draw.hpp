#ifndef __TEXTURE_AND_DRAW_HPP__
#define __TEXTURE_AND_DRAW_HPP__

#include <string>
#include <vector>

class Texture
    {
        public:

        ~Texture();

        void clear();

        void new_texture(char const *image_path);

        void print_texture();

        void set_xy(int const X , int const Y);

        int get_w();

        int get_h();

        private:

        SDL_Texture *texture = NULL ;
        SDL_Rect rect ;
    };

void draw_rectangle(int const RED,
                   int const GREEN,
                   int const BLUE,
                   int const OPACITY,
                   int const X,
                   int const Y,
                   int const W,
                   int const H);

#endif