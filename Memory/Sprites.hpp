#ifndef SPRITES_HPP
#define SPRITES_HPP

using Sprite = unsigned int;

const unsigned char sprites[][32] PROGMEM = {
  // ace
  0x00, 0x00, 0xfc, 0x02, 
  0xfa, 0x2a, 0xfa, 0x02, 
  0x02, 0x02, 0x02, 0x02, 
  0x02, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0x40, 
  0x40, 0x40, 0x40, 0x46, 
  0x4e, 0x5c, 0x4e, 0x46, 
  0x40, 0x3f, 0x00, 0x00, 

  // bat
  0x00, 0x80, 0xc0, 0xe0, 
  0xc0, 0xc0, 0x70, 0xe0, 
  0xe0, 0x70, 0xc0, 0xc0, 
  0xe0, 0xc0, 0x80, 0x00, 
  0x00, 0x07, 0x03, 0x03, 
  0x07, 0x01, 0x0f, 0x07, 
  0x07, 0x0f, 0x01, 0x07, 
  0x03, 0x03, 0x07, 0x00, 

  // cactus
  0x00, 0x00, 0x00, 0x80, 
  0x80, 0x00, 0xfc, 0xfe, 
  0xfe, 0xfc, 0x00, 0xf0, 
  0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 
  0x1f, 0x18, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x03, 0x03, 
  0x01, 0x00, 0x00, 0x00, 

  // controller
  0x00, 0xf0, 0x10, 0x90, 
  0xd0, 0x90, 0x10, 0xf4, 
  0xf2, 0x12, 0x92, 0x54, 
  0x94, 0x14, 0xf2, 0x00, 
  0x00, 0x0f, 0x0c, 0x0c, 
  0x0d, 0x0c, 0x0c, 0x0d, 
  0x0d, 0x0c, 0x0c, 0x0d, 
  0x0c, 0x0c, 0x0f, 0x00, 

  // ghost
  0x00, 0x00, 0x00, 0x00, 
  0xc0, 0xf0, 0xf8, 0xf8, 
  0xf8, 0xf8, 0xf0, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0c, 0x1c, 
  0x1f, 0x1f, 0x3e, 0x3b, 
  0x3b, 0x3e, 0x1f, 0x1f, 
  0x1c, 0x0c, 0x00, 0x00, 

  // helmet
  0x00, 0x00, 0xe0, 0xb8, 
  0xbc, 0xbc, 0xbe, 0xbe, 
  0xbe, 0xbe, 0xbc, 0xbc, 
  0xb8, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x3f, 
  0x44, 0x00, 0x00, 0x07, 
  0x07, 0x00, 0x00, 0x44, 
  0x3f, 0x07, 0x00, 0x00, 
  
  // hook
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x78, 0x4a,
  0x4a, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x0c, 0x38, 0x33,
  0x33, 0x3f, 0x1e, 0x00, 
  0x00, 0x00, 0x00, 0x00, 

  // king
  0x00, 0x00, 0x00, 0x80, 
  0x80, 0x36, 0x54, 0x36, 
  0x36, 0x54, 0x36, 0x80, 
  0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x17,
  0x01, 0x77, 0x36, 0x74, 
  0x74, 0x36, 0x77, 0x01, 
  0x17, 0x07, 0x00, 0x00,

   // lock
  0x00, 0x00, 0x80, 0xb8, 
  0xbc, 0x8c, 0x8c, 0x8c, 
  0x8c, 0x8c, 0x8c, 0xbc, 
  0xb8, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0x3f, 
  0x3f, 0x3f, 0x39, 0x20, 
  0x20, 0x39, 0x3f, 0x3f, 
  0x3f, 0x3f, 0x00, 0x00, 
  
  // palmtree
  0x00, 0x00, 0x00, 0x30, 
  0x18, 0x1a, 0x1a, 0x5c, 
  0xdc, 0x9a, 0x1a, 0x18, 
  0x30, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 
  0x65, 0x0e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,

  // potion
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x9c, 0xf4, 0x04, 
  0x04, 0xf4, 0x9c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1e, 
  0x21, 0x5c, 0x5e, 0x5e, 
  0x5e, 0x5e, 0x5c, 0x21, 
  0x1e, 0x00, 0x00, 0x00,

  // sign
  0x00, 0x00, 0x00, 0xf8, 
  0xf8, 0x58, 0x58, 0x5a, 
  0x5a, 0x58, 0x58, 0xf8, 
  0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 
  0x23, 0x43, 0x03, 0x7b, 
  0x7b, 0x03, 0x43, 0x23, 
  0x03, 0x00, 0x00, 0x00,

  // cursor0
  0x71, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0x01, 
  0x01, 0x00, 0x00, 0x00, 
  0x01, 0x01, 0x01, 0x38, 
  0x1c, 0x80, 0x80, 0x80, 
  0x00, 0x00, 0x00, 0x80, 
  0x80, 0x80, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x8e, 

  // cursor1
  0x1c, 0x00, 0x01, 0x01, 
  0x01, 0x00, 0x00, 0x00, 
  0x01, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0xe3, 
  0xc7, 0x80, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 
  0x00, 0x00, 0x00, 0x80, 
  0x80, 0x80, 0x00, 0x38, 

  // cursor2
  0xc7, 0x00, 0x00, 0x00, 
  0x01, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0x01, 
  0x01, 0x00, 0x00, 0x8e, 
  0x71, 0x00, 0x00, 0x80, 
  0x80, 0x80, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 
  0x00, 0x00, 0x00, 0xe3, 
};
#endif
