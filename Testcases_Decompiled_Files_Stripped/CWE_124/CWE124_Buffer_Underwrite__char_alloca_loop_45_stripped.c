
void FUN_001019a8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00102020(void)

{
  return;
}




void FUN_00101c84(void)

{
  return;
}




void FUN_00101d34(void)

{
  return;
}




void FUN_001018a5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101ecc(undefined8 *param_1)

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




undefined8 FUN_00101ea9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010197d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d4a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c9a(void)

{
  return;
}




void FUN_00101c8f(void)

{
  return;
}




void FUN_0010179f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010184f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019d6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101cc6(void)

{
  return;
}




void FUN_00101d08(void)

{
  return;
}




void FUN_00101f64(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d1e(void)

{
  return;
}




void FUN_00101ce7(void)

{
  return;
}




void FUN_00101600(void)

{
  undefined *puVar1;
  long in_FS_OFFSET;
  undefined auStack_28 [8];
  void *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar1 = auStack_28; puVar1 != auStack_28; puVar1 = puVar1 + -0x1000) {
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  }
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  local_20 = (void *)((ulong)(puVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar1 + -0x78) = 0x1016b6;
  memset((void *)((ulong)(puVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  DAT_00105028 = local_20;
  *(undefined8 *)(puVar1 + -0x78) = 0x1016de;
  FUN_00101561();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar1 + -0x78) = 0x1016f3;
  __stack_chk_fail();
}




undefined8 FUN_00101d81(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d4a,local_18);
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




void FUN_00101cdc(void)

{
  return;
}




void FUN_00101f45(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f83(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001016f5(void)

{
  FUN_00101600();
  return;
}




void FUN_00101ca5(void)

{
  return;
}




void FUN_00101561(void)

{
  long lVar1;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  lVar1 = DAT_00105028;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_00101779(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00101c6a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101cf2(void)

{
  return;
}




void FUN_001017d1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101c4c(void)

{
  return 1;
}




ulong FUN_00101b6d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101d13(void)

{
  return;
}




void FUN_001017f9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cb0(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101779(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101825(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_0010187a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




ulong FUN_00101a69(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d3f(void)

{
  return;
}




void FUN_00101cd1(void)

{
  return;
}




void FUN_00101468(void)

{
  undefined *puVar1;
  long in_FS_OFFSET;
  undefined auStack_28 [8];
  void *local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar1 = auStack_28; puVar1 != auStack_28; puVar1 = puVar1 + -0x1000) {
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  }
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  local_20 = (void *)((ulong)(puVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar1 + -0x78) = 0x10151e;
  memset((void *)((ulong)(puVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  DAT_00105020 = (long)local_20 + -8;
  local_18 = DAT_00105020;
  *(undefined8 *)(puVar1 + -0x78) = 0x10154a;
  FUN_001013c9();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar1 + -0x78) = 0x10155f;
  __stack_chk_fail();
}




void FUN_001013c9(void)

{
  long lVar1;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  lVar1 = DAT_00105020;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_00101779(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00101e4e(pthread_t *param_1)

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




void FUN_00101fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010170a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101779("Calling good()...");
  FUN_001016f5();
  FUN_00101779("Finished good()");
  FUN_00101779("Calling bad()...");
  FUN_00101468();
  FUN_00101779("Finished bad()");
  return 0;
}




void FUN_001018fb(undefined4 param_1)

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




void FUN_00101d29(void)

{
  return;
}




void FUN_00101cbb(void)

{
  return;
}




void FUN_00101a09(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101c5b(void)

{
  return 0;
}




void FUN_001018d0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101955(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cfd(void)

{
  return;
}



