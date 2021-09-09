#include "include.hpp"

void updayte_texture()
    {
        draw_rectangle(53,55,45,255,0,0,window_w,60);
        draw_rectangle(73,75,65,255,0,0,250,window_h);
        draw_rectangle(13,15,5,255,0,0,window_w,30);
        draw_rectangle(63,65,55,255,0,30,250,30);

        updayte_top_right();

        option.print_button();
        
        if(test)
            text_white_15pxl.print_text("TEST", 600 , 600);

        text_green_15pxl.print_text("rentrer:", 260 , 35);
        text_red_15pxl.print_text("deponce:", (window_w - 250) / 100 * 40 + 250 , 35);
        text_white_15pxl.print_text("difairence:", (window_w - 250) / 100 * 80 + 250 , 35);

        border[0].print_border();
        border[1].print_border();
    }

void updayte_top_right()
    {
        if(mouse_on_exit == 0)
            exit_1.print_texture();
            else if(mouse_on_exit==1)
                    exit_2.print_texture();
                    else exit_3.print_texture();
        if(maximize)
            {
                if(mouse_on_maximize_or_minimize == 0)
                    minimize_1.print_texture();
                    else if(mouse_on_maximize_or_minimize == 1)
                            minimize_2.print_texture();
                            else minimize_3.print_texture();
            }
            else
                {
                    if(mouse_on_maximize_or_minimize == 0)
                        maximize_1.print_texture();
                        else if(mouse_on_maximize_or_minimize == 1)
                                maximize_2.print_texture();
                                else maximize_3.print_texture();
                }
        if(mouse_on_hiden == 0)
            hide_1.print_texture();
            else if(mouse_on_hiden == 1)
                    hide_2.print_texture();
                    else hide_3.print_texture();
    }

void updayte_render()
    {
        SDL_RenderPresent(render);
        SDL_RenderClear(render);
    }