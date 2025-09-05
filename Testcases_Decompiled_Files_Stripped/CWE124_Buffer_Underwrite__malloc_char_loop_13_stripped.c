
void FUN_00101968(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102040(void)

{
  return;
}




void FUN_00101f96(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101c6e(void)

{
  return 0;
}




void FUN_00101d31(void)

{
  return;
}




void FUN_00101862(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101e61(pthread_t *param_1)

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




undefined8 FUN_00101d94(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d5d,local_18);
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




void FUN_0010190e(undefined4 param_1)

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




void FUN_00101d47(void)

{
  return;
}




void FUN_00101c97(void)

{
  return;
}




int FUN_00101c7d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010171d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010178c("Calling good()...");
  FUN_001016fe();
  FUN_0010178c("Finished good()");
  FUN_0010178c("Calling bad()...");
  FUN_001013e9();
  FUN_0010178c("Finished bad()");
  return 0;
}




void FUN_0010180c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101990(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101cc3(void)

{
  return;
}




void FUN_00101d05(void)

{
  return;
}




undefined8 FUN_00101edf(undefined8 *param_1)

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




void FUN_00101d1b(void)

{
  return;
}




void FUN_00101ce4(void)

{
  return;
}




void FUN_001013e9(void)

{
  void *__s;
  long in_FS_OFFSET;
  long local_90;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if (DAT_001030c8 == 5) {
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
  FUN_0010178c(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d52(void)

{
  return;
}




void FUN_00101cd9(void)

{
  return;
}




undefined8 FUN_00101ebc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f58(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001014ee(void)

{
  long in_FS_OFFSET;
  void *local_90;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (void *)0x0;
  if (DAT_001030c8 == 5) {
    local_90 = malloc(100);
    if (local_90 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
  }
  else {
    FUN_0010178c("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_0010178c(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ca2(void)

{
  return;
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




undefined8 FUN_00101c5f(void)

{
  return 1;
}




void FUN_00101cef(void)

{
  return;
}




void FUN_0010178c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00101a7c(long param_1,ulong param_2,long param_3)

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




void FUN_00101a1c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d10(void)

{
  return;
}




void FUN_001017b2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101cad(void)

{
  return;
}




void FUN_001016fe(void)

{
  FUN_001014ee();
  FUN_001015fd();
  return;
}




void FUN_001017e4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101838(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_001019e9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d3c(void)

{
  return;
}




void FUN_00101cce(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
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




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101d5d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f77(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001015fd(void)

{
  long in_FS_OFFSET;
  void *local_90;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (void *)0x0;
  if (DAT_001030c8 == 5) {
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
  FUN_0010178c(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018b8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d26(void)

{
  return;
}




void FUN_00101cb8(void)

{
  return;
}




void FUN_001019bb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101b80(long param_1,ulong param_2,long param_3)

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




void FUN_0010188d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018e3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cfa(void)

{
  return;
}



