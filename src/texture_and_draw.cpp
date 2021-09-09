#include "include.hpp"

Texture::~Texture()
    {
        clear();
    }

void Texture::clear()
    {
        SDL_DestroyTexture(texture);
        texture = NULL ;
    }

void Texture::new_texture(char const *image_path)
    {
        clear();
        
        SDL_Surface *surface = NULL ;
        
        surface = SDL_LoadBMP(image_path);
        
        if(surface == NULL)
            error("the surface did not load");
        
        texture = SDL_CreateTextureFromSurface(render,surface);
        
        if(texture == NULL)
            error("the texture did not load");
        
        SDL_FreeSurface(surface);

        if(SDL_QueryTexture(texture,NULL,NULL,&rect.w,&rect.h) != 0)
            error("the texture could not be query");
    }

void Texture::print_texture()
    {
        if(SDL_RenderCopy(render,texture,NULL,&rect) != 0)
            error("texture copy error");
    }

void Texture::set_xy(int const X , int const Y)
    {
        rect.x = X ;
        rect.y = Y ;
    }

int Texture::get_w()
    {
        return rect.w;
    }

int Texture::get_h()
    {
        return rect.h;
    }

 void draw_rectangle(int const RED,
                    int const GREEN,
                    int const BLUE,
                    int const OPACITY,
                    int const X,
                    int const Y,
                    int const W,
                    int const H)
    {
        SDL_Rect temp ;
        SDL_SetRenderDrawColor(render,RED,GREEN,BLUE,OPACITY);
        temp.x = X ;
        temp.y = Y ;
        temp.w = W ;
        temp.h = H ;
        SDL_RenderFillRect(render,&temp);
        SDL_SetRenderDrawColor(render,0,0,0,255);
    }