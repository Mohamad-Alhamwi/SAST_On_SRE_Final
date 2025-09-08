
void FUN_0010165c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101bd5(void)

{
  return;
}




void FUN_001015e7(void)

{
  FUN_0010150c();
  return;
}




void FUN_001016b4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101bf6(void)

{
  return;
}




bool FUN_00101d31(pthread_t *param_1)

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




void FUN_001018b9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e66(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b67(void)

{
  return;
}




void FUN_00101c22(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101b7d(void)

{
  return;
}




void FUN_0010175d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e47(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101788(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101708(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c01(void)

{
  return;
}




undefined8 FUN_00101b2f(void)

{
  return 1;
}




void FUN_00101c17(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101682(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101daf(undefined8 *param_1)

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




void FUN_00101ea0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b88(void)

{
  return;
}




void FUN_001018ec(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001017de(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001013e9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulong local_48;
  uint *local_40;
  uint *local_38;
  ulong local_30;
  undefined4 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = &local_54;
  local_38 = &local_54;
  local_54 = 0xffffffff;
  local_50 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_50 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_50 = rand();
    local_50 = local_50 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_40 = local_50;
  local_4c = *local_38;
  local_30 = (long)(int)local_4c << 2;
  local_28 = (undefined4 *)operator_new__(local_30);
  for (local_48 = 0; local_48 < (ulong)(long)(int)local_4c; local_48 = local_48 + 1) {
    local_28[local_48] = 0;
  }
  FUN_001016b4(*local_28);
  if (local_28 != (undefined4 *)0x0) {
    operator_delete__(local_28);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c0c(void)

{
  return;
}




void FUN_00101b9e(void)

{
  return;
}




void FUN_00101732(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bbf(void)

{
  return;
}




void FUN_00101c2d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001016dc(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ba9(void)

{
  return;
}




void FUN_00101be0(void)

{
  return;
}




ulong FUN_0010194c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b3e(void)

{
  return 0;
}




undefined8 FUN_00101d8c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010188b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101beb(void)

{
  return;
}




undefined8 FUN_001015f7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010165c("Calling good()...");
  FUN_001015e7();
  FUN_0010165c("Finished good()");
  FUN_0010165c("Calling bad()...");
  FUN_001013e9();
  FUN_0010165c("Finished bad()");
  return 0;
}




int FUN_00101b4d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b93(void)

{
  return;
}




void FUN_00101bca(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101860(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f10(void)

{
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffbc : 0x0010155b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010150c(void)

{
  long in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  ulong local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_44;
  local_28 = &local_44;
  local_40 = 0x14;
  local_44 = 0x14;
  local_3c = 0x14;
  local_20 = 0x50;
  local_18 = (undefined4 *)operator_new__(0x50);
  for (local_38 = 0; local_38 < (ulong)(long)local_3c; local_38 = local_38 + 1) {
    local_18[local_38] = 0;
  }
  FUN_001016b4(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e28(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101c64(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c2d,local_18);
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




ulong FUN_00101a50(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b72(void)

{
  return;
}




void FUN_00101bb4(void)

{
  return;
}




void FUN_00101838(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001017b3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



