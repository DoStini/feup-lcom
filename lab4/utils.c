#include <lcom/lcf.h>
#include <lcom/utils.h>
#include <stdint.h>

int (util_sys_inb)(int port, uint8_t * value) {

  uint32_t tempAddress = 0;

  // int sys_inb(int port, u32_t *byte);
  if (sys_inb(port, &tempAddress) != 0) return 1;

  *value = (uint8_t) (tempAddress);

  //printf("%s is not yet implemented!\n", __func__);

  return 0;
}
