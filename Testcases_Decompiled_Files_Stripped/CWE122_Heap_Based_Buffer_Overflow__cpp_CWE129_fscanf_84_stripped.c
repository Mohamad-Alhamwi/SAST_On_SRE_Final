
void FUN_00101766(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101791 to 00101795 has its CatchHandler @ 001017ba */
  FUN_00101554(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101592(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101860(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 0010188b to 0010188f has its CatchHandler @ 001018b4 */
  FUN_00101656(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101694(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_001018dd(void)

{
  FUN_001017e3();
  FUN_00101860();
  return;
}




void FUN_00101a83(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101f5f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f28,local_18);
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




undefined8 FUN_00101e39(void)

{
  return 0;
}




void FUN_00101a2d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010146a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 7;
  return;
}




void FUN_00102200(void)

{
  return;
}




void FUN_00101edb(void)

{
  return;
}




void FUN_00101eba(void)

{
  return;
}




void FUN_00101f28(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101554(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  __isoc99_fscanf(stdin,&DAT_00103028,param_1);
  return;
}




void FUN_00101a58(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e78(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102142(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101957(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e8e(void)

{
  return;
}




void FUN_00101f12(void)

{
  return;
}




void FUN_00101ef1(void)

{
  return;
}




undefined8 FUN_00101e2a(void)

{
  return 1;
}




void FUN_00101ec5(void)

{
  return;
}




void FUN_00101592(int *param_1)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if (*param_1 < 0) {
    FUN_00101957("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019af(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101b33(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f07(void)

{
  return;
}




void FUN_00102161(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001018f2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101957("Calling good()...");
  FUN_001018dd();
  FUN_00101957("Finished good()");
  FUN_00101957("Calling bad()...");
  FUN_00101766();
  FUN_00101957("Finished bad()");
  return 0;
}




void FUN_00101ad9(undefined4 param_1)

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




undefined8 FUN_00102087(void *param_1)

{
  free(param_1);
  return 1;
}




bool FUN_0010202c(pthread_t *param_1)

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




void FUN_00101656(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  __isoc99_fscanf(stdin,&DAT_00103050,param_1);
  return;
}




void FUN_001017e3(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 0010180e to 00101812 has its CatchHandler @ 00101837 */
  FUN_0010146a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101490(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00102123(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ed0(void)

{
  return;
}




undefined8 FUN_001020aa(undefined8 *param_1)

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




void FUN_00101eaf(void)

{
  return;
}




ulong FUN_00101d4b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103110,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101694(int *param_1)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if ((*param_1 < 0) || (9 < *param_1)) {
    FUN_00101957("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019af(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101a03(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101c47(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00101e48(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101efc(void)

{
  return;
}




void FUN_0010197d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101e62(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013b0();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_001019af(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019d7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101aae(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b5b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101e6d(void)

{
  return;
}




void FUN_00101b86(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f1d(void)

{
  return;
}




void FUN_00102190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f00)();
  return;
}




void FUN_00101ea4(void)

{
  return;
}




void FUN_00101e83(void)

{
  return;
}




void FUN_00101bb4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e99(void)

{
  return;
}




void FUN_00101ee6(void)

{
  return;
}




void FUN_00101be7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101490(int *param_1)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if (*param_1 < 0) {
    FUN_00101957("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019af(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}



