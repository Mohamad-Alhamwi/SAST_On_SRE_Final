
void FUN_00101691(void)

{
  FUN_001014e5();
  FUN_001015d6();
  return;
}




void FUN_00101c6e(void)

{
  return;
}




void FUN_001015a4(undefined8 param_1)

{
  __isoc99_fscanf(stdin,&DAT_00102008,param_1);
  return;
}




void FUN_0010170b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c8f(void)

{
  return;
}




void FUN_00101fb0(void)

{
  return;
}




void FUN_00101cdc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010190f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ed7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101bed(void)

{
  return 0;
}




void FUN_00101cbb(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101c16(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_001017b7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101e5e(undefined8 *param_1)

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




void FUN_001017e1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101763(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c9a(void)

{
  return;
}




ulong FUN_001019fb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cb0(void)

{
  return;
}




void FUN_0010141b(void)

{
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  FUN_001013e9(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_40 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101763(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_0010170b("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001016a6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010170b("Calling good()...");
  FUN_00101691();
  FUN_0010170b("Finished good()");
  FUN_0010170b("Calling bad()...");
  FUN_0010141b();
  FUN_0010170b("Finished bad()");
  return 0;
}




bool FUN_00101de0(pthread_t *param_1)

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




void FUN_00101ef6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c21(void)

{
  return;
}




void FUN_0010193a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101837(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001013e9(undefined8 param_1)

{
  __isoc99_fscanf(stdin,&DAT_00102008,param_1);
  return;
}




void FUN_001014cc(undefined4 *param_1)

{
  *param_1 = 7;
  return;
}




void FUN_00101ca5(void)

{
  return;
}




void FUN_00101c37(void)

{
  return;
}




void FUN_0010178b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c58(void)

{
  return;
}




void FUN_00101cc6(void)

{
  return;
}




void FUN_00101731(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c42(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101c79(void)

{
  return;
}




void FUN_00101968(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104028 = 1;
    return;
  }
  return;
}




ulong FUN_00101aff(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101d13(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cdc,local_18);
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




void FUN_001018e7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c84(void)

{
  return;
}




void FUN_001015d6(void)

{
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  FUN_001015a4(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_40 < 0) || (9 < local_40)) {
    FUN_0010170b("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101763(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bde(void)

{
  return 1;
}




void FUN_00101c2c(void)

{
  return;
}




void FUN_00101c63(void)

{
  return;
}




void FUN_0010188d(undefined4 param_1)

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




void FUN_00101f15(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001014e5(void)

{
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  FUN_001014cc(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_40 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
                    /* try { // try from 00101568 to 0010157e has its CatchHandler @ 00101581 */
      FUN_00101763(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_0010170b("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e3b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101cd1(void)

{
  return;
}




void FUN_0010199b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101bfc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c4d(void)

{
  return;
}




void FUN_00101862(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010180c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



