
void FUN_00101d72(void)

{
  return;
}




void FUN_00101925(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101558) */

void FUN_00101534(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_18 = 0;
  local_24 = 0;
  iVar1 = FUN_00101f4c(&DAT_00105020);
  if (iVar1 != 0) {
    iVar1 = FUN_00101e01(FUN_001013e6,&local_24,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    iVar1 = FUN_00101e01(FUN_001013e6,&local_24,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_20 != 0) && (iVar1 = FUN_00101ece(local_20), iVar1 != 0)) {
      FUN_00101f29(local_20);
    }
    if ((local_18 != 0) && (iVar1 = FUN_00101ece(local_18), iVar1 != 0)) {
      FUN_00101f29(local_18);
    }
    FUN_00102003(DAT_00105020);
    FUN_00101851(local_24);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101656(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_18 = 0;
  local_24 = 0;
  iVar1 = FUN_00101f4c(&DAT_00105020);
  if (iVar1 != 0) {
    iVar1 = FUN_00101e01(FUN_001013e6,&local_24,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    iVar1 = FUN_00101e01(FUN_001013e6,&local_24,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_20 != 0) && (iVar1 = FUN_00101ece(local_20), iVar1 != 0)) {
      FUN_00101f29(local_20);
    }
    if ((local_18 != 0) && (iVar1 = FUN_00101ece(local_18), iVar1 != 0)) {
      FUN_00101f29(local_18);
    }
    FUN_00102003(DAT_00105020);
    FUN_00101851(local_24);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_00101dca(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d3b(void)

{
  return;
}




void FUN_00101851(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d67(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f30)();
  return;
}




bool FUN_00101ece(pthread_t *param_1)

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




undefined8 FUN_00101e01(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dca,local_18);
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




int FUN_00101cea(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010178a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017f9("Calling good()...");
  FUN_0010176b();
  FUN_001017f9("Finished good()");
  FUN_001017f9("Calling bad()...");
  FUN_00101444();
  FUN_001017f9("Finished bad()");
  return 0;
}




void FUN_00101d25(void)

{
  return;
}




void FUN_00101d7d(void)

{
  return;
}




void FUN_001013e6(int *param_1)

{
  undefined4 local_14;
  
  FUN_00101fc5(DAT_00105020);
  for (local_14 = 0; local_14 < 1000000; local_14 = local_14 + 1) {
    *param_1 = *param_1 + 1;
  }
  FUN_00101fe4(DAT_00105020);
  return;
}




void FUN_00101fe4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001020a0(void)

{
  return;
}




ulong FUN_00101ae9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102030(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001013a9(int *param_1)

{
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < 1000000; local_14 = local_14 + 1) {
    *param_1 = *param_1 + 1;
  }
  return;
}




ulong FUN_00101bed(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f29(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101a89(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00105008);
    }
    FUN_001012f0();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101dbf(void)

{
  return;
}




void FUN_00101d04(void)

{
  return;
}




void FUN_00101da9(void)

{
  return;
}




void FUN_0010181f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d9e(void)

{
  return;
}




void FUN_001019fd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d0f(void)

{
  return;
}




void FUN_001018a5(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101f4c(undefined8 *param_1)

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




void FUN_001018cf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018fa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101950(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101cdb(void)

{
  return 0;
}




void FUN_001019d5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d1a(void)

{
  return;
}




void FUN_00101d30(void)

{
  return;
}




void FUN_0010197b(undefined4 param_1)

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




void FUN_00101d93(void)

{
  return;
}




void FUN_00101db4(void)

{
  return;
}




void FUN_00102003(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101444(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_18 = 0;
  local_24 = 0;
  iVar1 = FUN_00101e01(FUN_001013a9,&local_24,&local_20);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  iVar1 = FUN_00101e01(FUN_001013a9,&local_24,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if ((local_20 != 0) && (iVar1 = FUN_00101ece(local_20), iVar1 != 0)) {
    FUN_00101f29(local_20);
  }
  if ((local_18 != 0) && (iVar1 = FUN_00101ece(local_18), iVar1 != 0)) {
    FUN_00101f29(local_18);
  }
  FUN_00101851(local_24);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101a56(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101a28(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101ccc(void)

{
  return 1;
}




void FUN_001017f9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101879(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d51(void)

{
  return;
}




void FUN_0010176b(void)

{
  FUN_00101534();
  FUN_00101656();
  return;
}




void FUN_00101fc5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d88(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_00101d46(void)

{
  return;
}




void FUN_00101d5c(void)

{
  return;
}



