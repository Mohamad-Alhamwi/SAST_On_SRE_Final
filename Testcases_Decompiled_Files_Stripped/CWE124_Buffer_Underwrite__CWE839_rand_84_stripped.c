
void FUN_001019bd(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101de4(void)

{
  return 1;
}




int FUN_00101e02(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e1c(void)

{
  return;
}




void FUN_00101409(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101434 to 00101438 has its CatchHandler @ 0010145d */
  FUN_001015fa(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101670(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101503(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 0010152e to 00101532 has its CatchHandler @ 00101557 */
  FUN_001017e6(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_0010185c(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101e7f(void)

{
  return;
}




bool FUN_00101fe6(pthread_t *param_1)

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




void FUN_00101e69(void)

{
  return;
}




void FUN_00101b15(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101670(int *param_1)

{
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*param_1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*param_1 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101969(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_00101911("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019e7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b6e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e74(void)

{
  return;
}




void FUN_001020fc(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101a68(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e32(void)

{
  return;
}




void FUN_00102150(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010185c(int *param_1)

{
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((*param_1 < 0) || (9 < *param_1)) {
    FUN_00101911("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)*param_1 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101969(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f19(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ee2,local_18);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void FUN_00101ba1(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101718(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 7;
  return;
}




void FUN_001015fa(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00101ea0(void)

{
  return;
}




void FUN_00101580(void)

{
  FUN_00101486();
  FUN_00101503();
  return;
}




void FUN_00101e27(void)

{
  return;
}




void FUN_00101e95(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_001017e6(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *param_1 = uVar1;
  return;
}




ulong FUN_00101c01(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101df3(void)

{
  return 0;
}




void FUN_00101486(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001014b1 to 001014b5 has its CatchHandler @ 001014da */
  FUN_00101718(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_0010173e(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101969(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a3d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101ee2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00101d05(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e5e(void)

{
  return;
}




void FUN_00101ed7(void)

{
  return;
}




undefined8 FUN_00102041(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e3d(void)

{
  return;
}




undefined8 FUN_00102064(undefined8 *param_1)

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




void FUN_00101911(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101991(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101aed(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e48(void)

{
  return;
}




void FUN_00101e53(void)

{
  return;
}




void FUN_00101e8a(void)

{
  return;
}




void FUN_00101a93(undefined4 param_1)

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




void FUN_00101eab(void)

{
  return;
}




void FUN_00101eb6(void)

{
  return;
}




void FUN_001020dd(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101a12(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010173e(int *param_1)

{
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*param_1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*param_1 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101969(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_00101911("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101937(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ec1(void)

{
  return;
}




void FUN_0010211b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001021c0(void)

{
  return;
}




undefined8 FUN_00101595(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101911("Calling good()...");
  FUN_00101580();
  FUN_00101911("Finished good()");
  FUN_00101911("Calling bad()...");
  FUN_00101409();
  FUN_00101911("Finished bad()");
  return 0;
}




void FUN_00101ecc(void)

{
  return;
}




void FUN_00101b40(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}



