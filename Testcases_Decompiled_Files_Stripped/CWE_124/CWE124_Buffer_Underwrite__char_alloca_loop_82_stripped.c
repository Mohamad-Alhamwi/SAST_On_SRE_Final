
void FUN_00101566(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar4 = &local_38; ppvVar4 != &local_38; ppvVar4 = (void **)((long)ppvVar4 + -0x1000)) {
    *(undefined8 *)((long)ppvVar4 + -8) = *(undefined8 *)((long)ppvVar4 + -8);
  }
  *(undefined8 *)((long)ppvVar4 + -8) = *(undefined8 *)((long)ppvVar4 + -8);
  local_38 = (void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10161d;
  memset((void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_38 + 99) = 0;
  local_30 = (long)local_38 + -8;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10163e;
  puVar3 = (undefined8 *)operator_new(8);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101649;
  FUN_0010185a(puVar3);
  lVar2 = local_30;
  pcVar1 = *(code **)*puVar3;
  local_28 = puVar3;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101667;
  (*pcVar1)(puVar3,lVar2);
  puVar3 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10167d;
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101692;
  __stack_chk_fail();
}




void FUN_001017c6(void)

{
  FUN_00101698();
  return;
}




undefined8 FUN_001017d6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001018b5("Calling good()...");
  FUN_001017c6();
  FUN_001018b5("Finished good()");
  FUN_001018b5("Calling bad()...");
  FUN_00101566();
  FUN_001018b5("Finished bad()");
  return 0;
}




void FUN_0010198b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e7b(void)

{
  return;
}




ulong FUN_00101ca9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103218,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101935(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001020bf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e23(void)

{
  return;
}




void FUN_00101e02(void)

{
  return;
}




void FUN_00101e70(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101961(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101dc0(void)

{
  return;
}




undefined8 FUN_00102008(undefined8 *param_1)

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




void FUN_0010185a(undefined8 *param_1)

{
  FUN_0010183c(param_1);
  *param_1 = &PTR_FUN_00104c98;
  return;
}




void FUN_00101dd6(void)

{
  return;
}




void FUN_00101e5a(void)

{
  return;
}




void FUN_00101e39(void)

{
  return;
}




ulong FUN_00101ba5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103210,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e0d(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101a0c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e4f(void)

{
  return;
}




void FUN_001020f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102081(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010183c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104cf0;
  return;
}




void FUN_001019e1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101ebd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e86,local_18);
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




void FUN_00101e86(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102160(void)

{
  return;
}




void FUN_0010140a(undefined8 param_1,long param_2)

{
  long in_FS_OFFSET;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    *(undefined *)(param_2 + local_80) = local_78[local_80];
  }
  *(undefined *)(param_2 + 99) = 0;
  FUN_001018b5(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101698(void)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  long in_FS_OFFSET;
  void *local_38;
  void *local_30;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar4 = &local_38; ppvVar4 != &local_38; ppvVar4 = (void **)((long)ppvVar4 + -0x1000)) {
    *(undefined8 *)((long)ppvVar4 + -8) = *(undefined8 *)((long)ppvVar4 + -8);
  }
  *(undefined8 *)((long)ppvVar4 + -8) = *(undefined8 *)((long)ppvVar4 + -8);
  local_38 = (void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10174f;
  memset((void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_38 + 99) = 0;
  local_30 = local_38;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10176c;
  puVar3 = (undefined8 *)operator_new(8);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101777;
  FUN_00101888(puVar3);
  pvVar2 = local_30;
  pcVar1 = *(code **)*puVar3;
  local_28 = puVar3;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101795;
  (*pcVar1)(puVar3,pvVar2);
  puVar3 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1017ab;
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1017c0;
  __stack_chk_fail();
}




undefined8 FUN_00101fe5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e18(void)

{
  return;
}




bool FUN_00101f8a(pthread_t *param_1)

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




void FUN_00101df7(void)

{
  return;
}




void FUN_00101b45(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010190d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001014b8(undefined8 param_1,long param_2)

{
  long in_FS_OFFSET;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    *(undefined *)(param_2 + local_80) = local_78[local_80];
  }
  *(undefined *)(param_2 + 99) = 0;
  FUN_001018b5(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b12(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101d88(void)

{
  return 1;
}




void FUN_00101e44(void)

{
  return;
}




void FUN_00101888(undefined8 *param_1)

{
  FUN_0010183c(param_1);
  *param_1 = &PTR_FUN_00104c80;
  return;
}




undefined8 FUN_00101d97(void)

{
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void FUN_001018b5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001018db(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001019b6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a37(undefined4 param_1)

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




int FUN_00101da6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e65(void)

{
  return;
}




void FUN_00101a91(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001020a0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101dec(void)

{
  return;
}




void FUN_00101dcb(void)

{
  return;
}




void FUN_00101ab9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101de1(void)

{
  return;
}




void FUN_00101e2e(void)

{
  return;
}




void FUN_00101ae4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}



