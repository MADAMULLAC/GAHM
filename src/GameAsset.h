#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>

#ifdef __APPLE__
  #include <OpenGL/gl3.h>
#else
  #include <GL/gl.h>
#endif

class GameAsset {
 public:
  virtual void Draw(GLuint) = 0;

};

#endif
