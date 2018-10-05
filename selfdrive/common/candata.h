#ifndef CANDATA_H
#define CANDATA_H

typedef struct CanData {
  float address;
  float src;
  float busTime;
  float dat;
} CanData;

typedef struct CanMessage {
  float address;
  char* data;
} CanMessage;

#endif
