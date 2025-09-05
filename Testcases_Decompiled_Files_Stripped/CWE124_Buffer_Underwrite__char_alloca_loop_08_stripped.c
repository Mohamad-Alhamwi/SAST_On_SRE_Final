
void FUN_001019d0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010208f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101ff7(undefined8 *param_1)

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




void FUN_001020e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00101b94(long param_1,ulong param_2,long param_3)

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




void FUN_00101e28(void)

{
  return;
}




void FUN_001018fc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e6a(void)

{
  return;
}




void FUN_00101e5f(void)

{
  return;
}




void FUN_001019a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e3e(void)

{
  return;
}




undefined8 FUN_00101d77(void)

{
  return 1;
}




ulong FUN_00101c98(long param_1,ulong param_2,long param_3)

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




void FUN_0010154a(void)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  undefined auStack_98 [8];
  void *local_90;
  ulong local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = auStack_98; puVar3 != auStack_98; puVar3 = puVar3 + -0x1000) {
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  }
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  local_80 = (void *)((ulong)(puVar3 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar3 + -0x78) = 0x101603;
  memset((void *)((ulong)(puVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0x101618;
  iVar2 = FUN_001013d8();
  if (iVar2 == 0) {
    local_90 = local_80;
  }
  else {
    *(undefined8 *)(puVar3 + -0x78) = 0x101628;
    FUN_001018a4("Benign, fixed string");
  }
  *(undefined8 *)(puVar3 + -0x78) = 0x10164b;
  memset(local_78,0x43,99);
  pvVar1 = local_90;
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_90 + 99) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0x1016a0;
  FUN_001018a4(pvVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar3 + -0x78) = 0x1016b5;
  __stack_chk_fail();
}




void FUN_001018a4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019fb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dba(void)

{
  return;
}




void FUN_00101dfc(void)

{
  return;
}




undefined8 FUN_00101eac(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e75,local_18);
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




void FUN_00101e12(void)

{
  return;
}




void FUN_001020ae(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ddb(void)

{
  return;
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




void FUN_00101e49(void)

{
  return;
}




void FUN_00101dd0(void)

{
  return;
}




void FUN_00101e75(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101f79(pthread_t *param_1)

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




undefined8 FUN_001013c9(void)

{
  return 1;
}




undefined8 FUN_00101d86(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101b34(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101de6(void)

{
  return;
}




void FUN_001016b7(void)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  undefined auStack_98 [8];
  void *local_90;
  ulong local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = auStack_98; puVar3 != auStack_98; puVar3 = puVar3 + -0x1000) {
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  }
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  local_80 = (void *)((ulong)(puVar3 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar3 + -0x78) = 0x101770;
  memset((void *)((ulong)(puVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0x101785;
  iVar2 = FUN_001013c9();
  if (iVar2 != 0) {
    local_90 = local_80;
  }
  *(undefined8 *)(puVar3 + -0x78) = 0x1017aa;
  memset(local_78,0x43,99);
  pvVar1 = local_90;
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_90 + 99) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0x1017ff;
  FUN_001018a4(pvVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar3 + -0x78) = 0x101814;
  __stack_chk_fail();
}




void FUN_00101ad3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101aa8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101e07(void)

{
  return;
}




void FUN_00102150(void)

{
  return;
}




void FUN_00101816(void)

{
  FUN_0010154a();
  FUN_001016b7();
  return;
}




int FUN_00101d95(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001013e7(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  undefined auStack_98 [8];
  long local_90;
  ulong local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = auStack_98; puVar3 != auStack_98; puVar3 = puVar3 + -0x1000) {
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  }
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  local_80 = (void *)((ulong)(puVar3 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar3 + -0x78) = 0x1014a0;
  memset((void *)((ulong)(puVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0x1014b5;
  iVar2 = FUN_001013c9();
  if (iVar2 != 0) {
    local_90 = (long)local_80 + -8;
  }
  *(undefined8 *)(puVar3 + -0x78) = 0x1014de;
  memset(local_78,0x43,99);
  lVar1 = local_90;
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(local_90 + local_88) = local_78[local_88];
  }
  *(undefined *)(local_90 + 99) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0x101533;
  FUN_001018a4(lVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar3 + -0x78) = 0x101548;
  __stack_chk_fail();
}




undefined8 FUN_00101835(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001018a4("Calling good()...");
  FUN_00101816();
  FUN_001018a4("Finished good()");
  FUN_001018a4("Calling bad()...");
  FUN_001013e7();
  FUN_001018a4("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_001018ca(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a80(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e33(void)

{
  return;
}




void FUN_00101dc5(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00102070(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e54(void)

{
  return;
}




undefined8 FUN_00101fd4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001013d8(void)

{
  return 0;
}




void FUN_00101950(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e1d(void)

{
  return;
}




void FUN_00101daf(void)

{
  return;
}




void FUN_00101a26(undefined4 param_1)

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




void FUN_00101b01(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101924(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010197a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101df1(void)

{
  return;
}



