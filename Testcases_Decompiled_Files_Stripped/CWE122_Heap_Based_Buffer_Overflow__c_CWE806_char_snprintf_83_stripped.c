
void FUN_001019f9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f68(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001019a0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101a8c(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fe0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00101ce9(void)

{
  return;
}




void FUN_0010179c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d36(void)

{
  return;
}




void FUN_0010189d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d4c(void)

{
  return;
}




void FUN_00101872(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101c8d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101c6f(void)

{
  return 1;
}




void FUN_00101ca7(void)

{
  return;
}




void FUN_001017f4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101cb2(void)

{
  return;
}




void FUN_00102050(void)

{
  return;
}




void FUN_00101d15(void)

{
  return;
}




void FUN_001018f3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a2c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_00101618(void)

{
  FUN_001015a8();
  return;
}




void FUN_00101d57(void)

{
  return;
}




void FUN_0010168e(long *param_1,long param_2)

{
  *param_1 = param_2;
  memset((void *)*param_1,0x41,0x31);
  *(undefined *)(*param_1 + 0x31) = 0;
  return;
}




void FUN_00101cf4(void)

{
  return;
}




void FUN_00101474(undefined8 *param_1)

{
  undefined8 uVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_58[0x20] = '\0';
  local_58[0x21] = '\0';
  local_58[0x22] = '\0';
  local_58[0x23] = '\0';
  local_58[0x24] = '\0';
  local_58[0x25] = '\0';
  local_58[0x26] = '\0';
  local_58[0x27] = '\0';
  local_58[0x28] = '\0';
  local_58[0x29] = '\0';
  local_58[0x2a] = '\0';
  local_58[0x2b] = '\0';
  local_58[0x2c] = '\0';
  local_58[0x2d] = '\0';
  local_58[0x2e] = '\0';
  local_58[0x2f] = '\0';
  local_58[0x30] = '\0';
  local_58[0x31] = '\0';
  uVar1 = *param_1;
  __maxlen = strlen((char *)*param_1);
  snprintf(local_58,__maxlen,"%s",uVar1);
  FUN_0010179c(*param_1);
  free((void *)*param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010181c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010142a(long *param_1,long param_2)

{
  *param_1 = param_2;
  memset((void *)*param_1,0x41,99);
  *(undefined *)(*param_1 + 99) = 0;
  return;
}




void FUN_00101cbd(void)

{
  return;
}




void FUN_001018c8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010191e(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101538(void)

{
  long in_FS_OFFSET;
  undefined local_20 [8];
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_0010142a(local_20,local_18);
  FUN_00101474(local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d6d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101c7e(void)

{
  return 0;
}




undefined8 FUN_00101ecc(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101628(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010179c("Calling good()...");
  FUN_00101618();
  FUN_0010179c("Finished good()");
  FUN_0010179c("Calling bad()...");
  FUN_00101538();
  FUN_0010179c("Finished bad()");
  return 0;
}




ulong FUN_00101b90(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101da4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d6d,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00101f87(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cff(void)

{
  return;
}




void FUN_00101d20(void)

{
  return;
}




void FUN_00101cde(void)

{
  return;
}




void FUN_00101fa6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001017c2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_001019cb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d2b(void)

{
  return;
}




void FUN_00101d62(void)

{
  return;
}




undefined8 FUN_00101eef(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00101848(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cd3(void)

{
  return;
}




void FUN_00101978(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001016d8(undefined8 *param_1)

{
  undefined8 uVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_58[0x20] = '\0';
  local_58[0x21] = '\0';
  local_58[0x22] = '\0';
  local_58[0x23] = '\0';
  local_58[0x24] = '\0';
  local_58[0x25] = '\0';
  local_58[0x26] = '\0';
  local_58[0x27] = '\0';
  local_58[0x28] = '\0';
  local_58[0x29] = '\0';
  local_58[0x2a] = '\0';
  local_58[0x2b] = '\0';
  local_58[0x2c] = '\0';
  local_58[0x2d] = '\0';
  local_58[0x2e] = '\0';
  local_58[0x2f] = '\0';
  local_58[0x30] = '\0';
  local_58[0x31] = '\0';
  uVar1 = *param_1;
  __maxlen = strlen((char *)*param_1);
  snprintf(local_58,__maxlen,"%s",uVar1);
  FUN_0010179c(*param_1);
  free((void *)*param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101d0a(void)

{
  return;
}




void FUN_00101d41(void)

{
  return;
}




bool FUN_00101e71(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00101cc8(void)

{
  return;
}




void FUN_001015a8(void)

{
  long in_FS_OFFSET;
  undefined local_20 [8];
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = malloc(100);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_0010168e(local_20,local_18);
  FUN_001016d8(local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



