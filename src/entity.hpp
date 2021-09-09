#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

#include <string>

class Button
    {
        public:

            void init_button(char const *path , int x , int y);
            void print_button();
            void status_change();
            void status_reset();

        private:
            Texture m_texture ;
            int m_x ;
            int m_y ;
            int m_status = 0 ;
    };

class Border
    {
        public:

            void init_border(std::string name , int position);
            void print_border();
            void print_the_top_green(int w);
            void print_the_top_red(int w);
            void print_the_top(int red , int green);

        private:

            std::string m_name ;
            Texture m_texture ;
            int m_y ;
    };

class Text
    {
        public:

            void init_text(std::string path);
            
            void print_text(std::string text , int x , int y);

            int get_w(std::string text);

        private:

            Texture character[95] ;
    };

#endif