#pragma once
#include <pebble.h>

// Outlined Text Layer by Ben Caller

typedef struct OutlinedTextLayer OutlinedTextLayer;

OutlinedTextLayer *outlined_text_layer_create(GRect frame);
void outlined_text_layer_destroy(OutlinedTextLayer *layer);
Layer* outlined_text_layer_get_layer(OutlinedTextLayer* layer);

void outlined_text_layer_set_text(OutlinedTextLayer* layer, char* text);
void outlined_text_layer_set_font(OutlinedTextLayer* layer, GFont font);

void outlined_text_layer_set_colors(OutlinedTextLayer * layer, GColor outline_color, GColor text_color);

void outlined_text_layer_set_text_alignment(OutlinedTextLayer * text_layer, GTextAlignment text_alignment);
void outlined_text_layer_set_text_overflow_mode(OutlinedTextLayer * text_layer, GTextOverflowMode overflow);