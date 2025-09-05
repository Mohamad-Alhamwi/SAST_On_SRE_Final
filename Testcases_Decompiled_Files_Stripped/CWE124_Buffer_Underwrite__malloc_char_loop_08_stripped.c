
void FUN_0010185f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001013e9(void)

{
  return 1;
}




void FUN_001018df(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101c95(void)

{
  return 0;
}




void FUN_00101cd4(void)

{
  return;
}




void FUN_0010198f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010180b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101d79(void)

{
  return;
}




void FUN_00101d16(void)

{
  return;
}




bool FUN_00101e88(pthread_t *param_1)

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




void FUN_001017b3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00101ba7(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101f06(undefined8 *param_1)

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




void FUN_001019b7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010150f(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_90;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (void *)0x0;
  iVar1 = FUN_001013f8();
  if (iVar1 == 0) {
    local_90 = malloc(100);
    if (local_90 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
  }
  else {
    FUN_001017b3("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_001017b3(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101889(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101cbe(void)

{
  return;
}




int FUN_00101ca4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101621(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_90;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (void *)0x0;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_90 = malloc(100);
    if (local_90 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_001017b3(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010190a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101407(void)

{
  int iVar1;
  void *__s;
  long in_FS_OFFSET;
  long local_90;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    __s = malloc(100);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0x41,99);
    *(undefined *)((long)__s + 99) = 0;
    local_90 = (long)__s + -8;
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)(local_90 + 99) = 0;
  FUN_001017b3(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c86(void)

{
  return 1;
}




void FUN_00101d4d(void)

{
  return;
}




void FUN_001018b4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101833(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cf5(void)

{
  return;
}




void FUN_00101cdf(void)

{
  return;
}




void FUN_00101cea(void)

{
  return;
}




void FUN_00101d63(void)

{
  return;
}




void FUN_00101d42(void)

{
  return;
}




void FUN_00101935(undefined4 param_1)

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




void FUN_00101d6e(void)

{
  return;
}




undefined8 FUN_001013f8(void)

{
  return 0;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101cc9(void)

{
  return;
}




void FUN_00101d2c(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101a43(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d21(void)

{
  return;
}




void FUN_00101d58(void)

{
  return;
}




void FUN_00101ff0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102060(void)

{
  return;
}




void FUN_00101f9e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101ee3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019e2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017d9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101dbb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d84,local_18);
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




undefined8 FUN_00101744(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017b3("Calling good()...");
  FUN_00101725();
  FUN_001017b3("Finished good()");
  FUN_001017b3("Calling bad()...");
  FUN_00101407();
  FUN_001017b3("Finished bad()");
  return 0;
}




void FUN_00101d37(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101d00(void)

{
  return;
}




void FUN_00101d84(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f7f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101fbd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101725(void)

{
  FUN_0010150f();
  FUN_00101621();
  return;
}




void FUN_00101a10(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101aa3(long param_1,ulong param_2,long param_3)

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




void FUN_00101d0b(void)

{
  return;
}



