
void FUN_0010174a(undefined8 *param_1)

{
  FUN_001016fe(param_1);
  *param_1 = &PTR_FUN_00104c78;
  return;
}




void FUN_001017fc(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(param_2,local_78,100);
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_0010187f(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010187f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a01(undefined4 param_1)

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




undefined8 FUN_00101faf(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d8a(void)

{
  return;
}




void FUN_001019ab(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101429(void)

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
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x1014e0;
  memset((void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_38 + 99) = 0;
  local_30 = (long)local_38 + -8;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101501;
  puVar3 = (undefined8 *)operator_new(8);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10150c;
  FUN_0010171c(puVar3);
  lVar2 = local_30;
  pcVar1 = *(code **)*puVar3;
  local_28 = puVar3;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10152a;
  (*pcVar1)(puVar3,lVar2);
  puVar3 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101540;
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101555;
  __stack_chk_fail();
}




void FUN_00101e19(void)

{
  return;
}




void FUN_00101df8(void)

{
  return;
}




bool FUN_00101f54(pthread_t *param_1)

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




void FUN_00101689(void)

{
  FUN_0010155b();
  return;
}




void FUN_001019d6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101db6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_001020c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001018d7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101dcc(void)

{
  return;
}




void FUN_00101e50(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e2f(void)

{
  return;
}




int FUN_00101d70(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e03(void)

{
  return;
}




undefined8 FUN_00101699(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010187f("Calling good()...");
  FUN_00101689();
  FUN_0010187f("Finished good()");
  FUN_0010187f("Calling bad()...");
  FUN_00101429();
  FUN_0010187f("Finished bad()");
  return 0;
}




void FUN_00101aae(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101e45(void)

{
  return;
}




void FUN_00102130(void)

{
  return;
}




void FUN_001018a5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a83(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010204b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101fd2(undefined8 *param_1)

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




void FUN_001016fe(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104ca8;
  return;
}




void FUN_00101778(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(param_2,local_78,100);
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_0010187f(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102089(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e0e(void)

{
  return;
}




void FUN_0010206a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ded(void)

{
  return;
}




undefined8 FUN_00101d61(void)

{
  return 0;
}




void FUN_0010171c(undefined8 *param_1)

{
  FUN_001016fe(param_1);
  *param_1 = &PTR_FUN_00104c90;
  return;
}




void FUN_00101980(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d52(void)

{
  return 1;
}




void FUN_00101d95(void)

{
  return;
}




void FUN_00101e3a(void)

{
  return;
}




void FUN_001018ff(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101da0(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_0010192b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101955(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a5b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101adc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_00101dab(void)

{
  return;
}




void FUN_00101b0f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101e87(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e50,local_18);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101de2(void)

{
  return;
}




void FUN_00101dc1(void)

{
  return;
}




ulong FUN_00101b6f(long param_1,ulong param_2,long param_3)

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




void FUN_00101dd7(void)

{
  return;
}




void FUN_00101e24(void)

{
  return;
}




ulong FUN_00101c73(long param_1,ulong param_2,long param_3)

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




void FUN_0010155b(void)

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
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101612;
  memset((void *)((ulong)((long)ppvVar4 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_38 + 99) = 0;
  local_30 = local_38;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10162f;
  puVar3 = (undefined8 *)operator_new(8);
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10163a;
  FUN_0010174a(puVar3);
  pvVar2 = local_30;
  pcVar1 = *(code **)*puVar3;
  local_28 = puVar3;
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101658;
  (*pcVar1)(puVar3,pvVar2);
  puVar3 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    *(undefined8 *)((long)ppvVar4 + -0x78) = 0x10166e;
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar4 + -0x78) = 0x101683;
  __stack_chk_fail();
}



