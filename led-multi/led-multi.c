void main() {
  unsigned char x, y;
  unsigned int i;
  p1 = 0x00;
  while (1) {
    x = 0x01;
    for (y=0; y<8; y++) {
      p1 = x;
      for (i=0; i<50000; i++) {
        x = x << 1;
      }
    }
  }
}
