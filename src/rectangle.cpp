#include "../header/rectangle.hpp"

Rectangle::Rectangle(){
	this->width = 1;
	this->height = 1;
}

Rectangle::Rectangle(int w, int h){
	this->width = w;
	this->height = h;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return 0;
}
int Rectangle::get_width() {
	return this->width;
}

int Rectangle::get_height() {
	return this->height;

}
int Rectangle::perimeter(){
	return (this->width*2 + this->height*2);
}
