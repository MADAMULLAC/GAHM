#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>

#include <OpenGL/gl3.h>

class GameAsset {
 public:
  virtual void Draw(GLuint) = 0;

};

#endif
