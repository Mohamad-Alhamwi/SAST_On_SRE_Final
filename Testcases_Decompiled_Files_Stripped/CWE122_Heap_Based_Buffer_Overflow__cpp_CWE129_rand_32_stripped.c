
void FUN_001019bd(undefined4 param_1)

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




undefined8 FUN_00101e43(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e0c,local_18);
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




void FUN_00101967(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a3f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101f8e(undefined8 *param_1)

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




void FUN_00101d5c(void)

{
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00101595 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101546(void)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_20 = &local_38;
  local_30 = 7;
  local_38 = 7;
  local_2c = 7;
  local_18 = operator_new__(0x28);
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_34 * 4) = 0;
  }
  if (local_2c < 0) {
    FUN_0010183b("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
    for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
      FUN_00101893(*(undefined4 *)((long)local_18 + (long)local_34 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101da9(void)

{
  return;
}




void FUN_00102070(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101893(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101dbf(void)

{
  return;
}




void FUN_00101861(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101b2b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a98(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101c2f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001017c1(void)

{
  FUN_00101546();
  FUN_0010165b();
  return;
}




void FUN_00102007(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d88(void)

{
  return;
}




void FUN_00102045(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001018e7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a17(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101dca(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101d67(void)

{
  return;
}




undefined8 FUN_001017d6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010183b("Calling good()...");
  FUN_001017c1();
  FUN_0010183b("Finished good()");
  FUN_0010183b("Calling bad()...");
  FUN_001013e9();
  FUN_0010183b("Finished bad()");
  return 0;
}




undefined8 FUN_00101d1d(void)

{
  return 0;
}




void FUN_001018bb(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101911(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101de0(void)

{
  return;
}




void FUN_00102026(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101acb(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101e01(void)

{
  return;
}




void FUN_001020e0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101a6a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101deb(void)

{
  return;
}




bool FUN_00101f10(pthread_t *param_1)

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




void FUN_00101d72(void)

{
  return;
}




void FUN_00101d93(void)

{
  return;
}




void FUN_00101d51(void)

{
  return;
}




undefined8 FUN_00101f6b(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010165b(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint *local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_48;
  local_30 = &local_48;
  local_48 = 0xffffffff;
  local_40 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_40 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_40 = rand();
    local_40 = local_40 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_38 = local_40;
  local_3c = *local_30;
  local_28 = operator_new__(0x28);
  for (local_44 = 0; local_44 < 10; local_44 = local_44 + 1) {
    *(undefined4 *)((long)local_28 + (long)local_44 * 4) = 0;
  }
  if (((int)local_3c < 0) || (9 < (int)local_3c)) {
    FUN_0010183b("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_28 + (long)(int)local_3c * 4) = 1;
    for (local_44 = 0; local_44 < 10; local_44 = local_44 + 1) {
      FUN_00101893(*(undefined4 *)((long)local_28 + (long)local_44 * 4));
    }
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101992(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d9e(void)

{
  return;
}




void FUN_00101dd5(void)

{
  return;
}




void FUN_00101e0c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010183b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d46(void)

{
  return;
}




void FUN_0010193c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001013e9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint *local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_48;
  local_30 = &local_48;
  local_48 = 0xffffffff;
  local_40 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_40 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_40 = rand();
    local_40 = local_40 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_38 = local_40;
  local_3c = *local_30;
  local_28 = operator_new__(0x28);
  for (local_44 = 0; local_44 < 10; local_44 = local_44 + 1) {
    *(undefined4 *)((long)local_28 + (long)local_44 * 4) = 0;
  }
  if ((int)local_3c < 0) {
    FUN_0010183b("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_28 + (long)(int)local_3c * 4) = 1;
    for (local_44 = 0; local_44 < 10; local_44 = local_44 + 1) {
      FUN_00101893(*(undefined4 *)((long)local_28 + (long)local_44 * 4));
    }
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d7d(void)

{
  return;
}




void FUN_00101db4(void)

{
  return;
}




void FUN_00101df6(void)

{
  return;
}




int FUN_00101d2c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101d0e(void)

{
  return 1;
}



