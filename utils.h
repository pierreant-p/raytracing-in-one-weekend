#ifndef UTILSH
#define UTILSH

vec3 random_in_unit_sphere() {
  vec3 p;
  do {
    p = 2.0 * vec3(drand48(), drand48(), drand48()) - vec3(1.0, 1.0, 1.0);
  } while (p.squared_length() >= 1.0);
  return p;
}

#endif
