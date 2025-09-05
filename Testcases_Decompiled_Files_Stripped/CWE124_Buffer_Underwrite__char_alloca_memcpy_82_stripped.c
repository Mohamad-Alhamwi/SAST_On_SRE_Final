
void FUN_001018dc(undefined8 *param_1)

{
  FUN_001018be(param_1);
  *param_1 = &PTR_FUN_00104c98;
  return;
}




void FUN_00101937(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010195d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b13(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010208a(undefined8 *param_1)

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




void FUN_00101e4d(void)

{
  return;
}




void FUN_00101a8e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001014fa(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *param_2 = local_88;
  param_2[1] = local_80;
  param_2[2] = local_78;
  param_2[3] = local_70;
  param_2[4] = local_68;
  param_2[5] = local_60;
  param_2[6] = local_58;
  param_2[7] = local_50;
  param_2[8] = local_48;
  param_2[9] = local_40;
  param_2[10] = local_38;
  param_2[0xb] = local_30;
  *(uint *)(param_2 + 0xc) = local_28;
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_00101937(param_2);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101edc(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void FUN_00101ebb(void)

{
  return;
}




undefined8 FUN_00102067(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010171b(void)

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
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1017d2;
  memset((void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_38 + 99) = 0;
  local_30 = local_38;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1017ef;
  puVar3 = (undefined8 *)operator_new(8);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1017fa;
  FUN_0010190a(puVar3);
  pvVar2 = local_30;
  pcVar1 = *(code **)*puVar3;
  local_28 = puVar3;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101818;
  (*pcVar1)(puVar3,pvVar2);
  puVar3 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10182e;
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101843;
  __stack_chk_fail();
}




void FUN_00101ab9(undefined4 param_1)

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




void FUN_00101e79(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_001021e0(void)

{
  return;
}




void FUN_001019b7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e8f(void)

{
  return;
}




undefined8 FUN_00101f3f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f08,local_18);
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




void FUN_00101ef2(void)

{
  return;
}




void FUN_00101e42(void)

{
  return;
}




void FUN_00101ec6(void)

{
  return;
}




void FUN_00101849(void)

{
  FUN_0010171b();
  return;
}




void FUN_00101b94(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f08(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010198f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b66(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102122(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102103(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101859(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101937("Calling good()...");
  FUN_00101849();
  FUN_00101937("Finished good()");
  FUN_00101937("Calling bad()...");
  FUN_001015e9();
  FUN_00101937("Finished bad()");
  return 0;
}




void FUN_0010190a(undefined8 *param_1)

{
  FUN_001018be(param_1);
  *param_1 = &PTR_FUN_00104c80;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00102170(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ed1(void)

{
  return;
}




void FUN_00102141(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101eb0(void)

{
  return;
}




int FUN_00101e28(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018be(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104cf0;
  return;
}




void FUN_00101a63(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101e19(void)

{
  return 0;
}




void FUN_00101e58(void)

{
  return;
}




void FUN_00101efd(void)

{
  return;
}




void FUN_001019e3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e63(void)

{
  return;
}




void FUN_0010140a(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *param_2 = local_88;
  param_2[1] = local_80;
  param_2[2] = local_78;
  param_2[3] = local_70;
  param_2[4] = local_68;
  param_2[5] = local_60;
  param_2[6] = local_58;
  param_2[7] = local_50;
  param_2[8] = local_48;
  param_2[9] = local_40;
  param_2[10] = local_38;
  param_2[0xb] = local_30;
  *(uint *)(param_2 + 0xc) = local_28;
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_00101937(param_2);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a0d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b3b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101bc7(long param_1,ulong param_2)

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
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101e6e(void)

{
  return;
}




ulong FUN_00101c27(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103214,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_0010200c(pthread_t *param_1)

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




void FUN_00101ea5(void)

{
  return;
}




void FUN_00101e84(void)

{
  return;
}




ulong FUN_00101d2b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010321c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e9a(void)

{
  return;
}




void FUN_00101ee7(void)

{
  return;
}




undefined8 FUN_00101e0a(void)

{
  return 1;
}




void FUN_001015e9(void)

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
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1016a0;
  memset((void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_38 + 99) = 0;
  local_30 = (long)local_38 + -8;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1016c1;
  puVar3 = (undefined8 *)operator_new(8);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1016cc;
  FUN_001018dc(puVar3);
  lVar2 = local_30;
  pcVar1 = *(code **)*puVar3;
  local_28 = puVar3;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1016ea;
  (*pcVar1)(puVar3,lVar2);
  puVar3 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101700;
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101715;
  __stack_chk_fail();
}



