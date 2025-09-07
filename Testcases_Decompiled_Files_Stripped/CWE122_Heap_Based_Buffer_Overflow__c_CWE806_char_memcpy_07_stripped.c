
void FUN_00101844(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101ec8(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101da0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d69,local_18);
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




void FUN_00101f64(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001019c7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cfb(void)

{
  return;
}




undefined8 FUN_00101729(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101798("Calling good()...");
  FUN_0010170a();
  FUN_00101798("Finished good()");
  FUN_00101798("Calling bad()...");
  FUN_00101429();
  FUN_00101798("Finished bad()");
  return 0;
}




void FUN_00101d3d(void)

{
  return;
}




void FUN_00101d32(void)

{
  return;
}




void FUN_00101818(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102040(void)

{
  return;
}




void FUN_00101fa2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d11(void)

{
  return;
}




void FUN_00101a28(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001019f5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_00101619(void)

{
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (char *)malloc(100);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (DAT_00105010 == 5) {
    memset(__s,0x41,0x31);
    __s[0x31] = '\0';
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00101798(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010186e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101c7a(void)

{
  return 0;
}




void FUN_00101ccf(void)

{
  return;
}




void FUN_00101d53(void)

{
  return;
}




void FUN_00101ce5(void)

{
  return;
}




undefined8 FUN_00101eeb(undefined8 *param_1)

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




void FUN_00101cae(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101d1c(void)

{
  return;
}




void FUN_00101ca3(void)

{
  return;
}




void FUN_00101d48(void)

{
  return;
}




void FUN_00101d5e(void)

{
  return;
}




void FUN_001011b0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




ulong FUN_00101a88(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cb9(void)

{
  return;
}




void FUN_0010199c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011b0(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_0010191a(undefined4 param_1)

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




void FUN_001018ef(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cda(void)

{
  return;
}




void FUN_00101f83(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101429(void)

{
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (char *)malloc(100);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (DAT_00105010 == 5) {
    memset(__s,0x41,99);
    __s[99] = '\0';
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00101798(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00101b8c(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_0010151a(void)

{
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (char *)malloc(100);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (DAT_00105010 == 5) {
    memset(__s,0x41,0x31);
    __s[0x31] = '\0';
  }
  else {
    FUN_00101798("Benign, fixed string");
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00101798(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010170a(void)

{
  FUN_0010151a();
  FUN_00101619();
  return;
}




void FUN_001018c4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d06(void)

{
  return;
}




int FUN_00101c89(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




bool FUN_00101e6d(pthread_t *param_1)

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




void FUN_00101d27(void)

{
  return;
}




void FUN_00101d69(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017be(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101cf0(void)

{
  return;
}




undefined8 FUN_00101c6b(void)

{
  return 1;
}




void FUN_00101899(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101974(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101798(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001017f0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101cc4(void)

{
  return;
}



