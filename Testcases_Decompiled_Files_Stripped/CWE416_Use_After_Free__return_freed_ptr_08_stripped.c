
void FUN_001016c8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101cd0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c99,local_18);
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




void FUN_00101c8e(void)

{
  return;
}




undefined8 FUN_00101df8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010181f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bff(void)

{
  return;
}




void FUN_00101581(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00101563();
  if (iVar1 != 0) {
    uVar2 = FUN_001013e9("BadSink");
    FUN_001016c8(uVar2);
  }
  return;
}




void FUN_00101c41(void)

{
  return;
}




void FUN_00101c36(void)

{
  return;
}




undefined8 FUN_00101659(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016c8("Calling good()...");
  FUN_0010163a();
  FUN_001016c8("Finished good()");
  FUN_001016c8("Calling bad()...");
  FUN_00101581();
  FUN_001016c8("Finished bad()");
  return 0;
}




void FUN_00101ed2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e94(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c15(void)

{
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_001018a4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010184a(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




undefined8 FUN_00101563(void)

{
  return 1;
}




void FUN_001016ee(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101958(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101bd3(void)

{
  return;
}




void FUN_00101c57(void)

{
  return;
}




void FUN_00101be9(void)

{
  return;
}




bool FUN_00101d9d(pthread_t *param_1)

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




undefined8 FUN_00101b9b(void)

{
  return 1;
}




void FUN_00101c20(void)

{
  return;
}




ulong FUN_00101abc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c4c(void)

{
  return;
}




void FUN_00101c78(void)

{
  return;
}




void FUN_001018cc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101baa(void)

{
  return 0;
}




void FUN_001017f4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101eb3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_0010179e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101774(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101bde(void)

{
  return;
}




undefined8 FUN_00101e1b(undefined8 *param_1)

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




void * FUN_001013e9(char *param_1)

{
  size_t sVar1;
  void *__ptr;
  ulong local_20;
  
  if (param_1 == (char *)0x0) {
    __ptr = (void *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    __ptr = malloc(sVar1 + 1);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_20 = 0; local_20 < sVar1; local_20 = local_20 + 1) {
      *(char *)(local_20 + (long)__ptr) = param_1[(sVar1 - local_20) + -1];
    }
    *(undefined *)(sVar1 + (long)__ptr) = 0;
    free(__ptr);
  }
  return __ptr;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_001018f7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void * FUN_001014ac(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  ulong local_20;
  
  if (param_1 == (char *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    pvVar2 = malloc(sVar1 + 1);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_20 = 0; local_20 < sVar1; local_20 = local_20 + 1) {
      *(char *)(local_20 + (long)pvVar2) = param_1[(sVar1 - local_20) + -1];
    }
    *(undefined *)(sVar1 + (long)pvVar2) = 0;
  }
  return pvVar2;
}




undefined8 FUN_00101572(void)

{
  return 0;
}




void FUN_00101748(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c0a(void)

{
  return;
}




ulong FUN_001019b8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c99(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c62(void)

{
  return;
}




void FUN_00101c2b(void)

{
  return;
}




void FUN_00101c83(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101601(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00101563();
  if (iVar1 != 0) {
    uVar2 = FUN_001014ac("GoodSink");
    FUN_001016c8(uVar2);
  }
  return;
}




void FUN_00101bf4(void)

{
  return;
}




void FUN_00101925(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101720(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001017c9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015ba(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00101572();
  if (iVar1 == 0) {
    uVar2 = FUN_001014ac("GoodSink");
    FUN_001016c8(uVar2);
  }
  else {
    FUN_001016c8("Benign, fixed string");
  }
  return;
}




void FUN_00101c6d(void)

{
  return;
}




void FUN_0010163a(void)

{
  FUN_001015ba();
  FUN_00101601();
  return;
}




int FUN_00101bb9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



