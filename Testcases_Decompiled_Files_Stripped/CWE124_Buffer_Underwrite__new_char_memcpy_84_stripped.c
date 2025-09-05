
void FUN_0010170c(long *param_1,long param_2)

{
  void *__s;
  
  *param_1 = param_2;
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  *param_1 = (long)__s + -8;
  return;
}




void FUN_00101a61(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101aba(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101aed(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d89(void)

{
  return;
}




void FUN_00101e02(void)

{
  return;
}




void FUN_00101d73(void)

{
  return;
}




void FUN_00101933(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00102110(void)

{
  return;
}




void FUN_0010176c(long *param_1)

{
  undefined8 *puVar1;
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
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)(*param_1 + 99) = 0;
  FUN_0010185d(*param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102048(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101989(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d7e(void)

{
  return;
}




void FUN_00101e2e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018b5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00101c51(long param_1,ulong param_2,long param_3)

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




bool FUN_00101f32(pthread_t *param_1)

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




void FUN_001014a6(long *param_1)

{
  undefined8 *puVar1;
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
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)(*param_1 + 99) = 0;
  FUN_0010185d(*param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101df7(void)

{
  return;
}




void FUN_00102067(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001019b4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101daa(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




ulong FUN_00101b4d(long param_1,ulong param_2,long param_3)

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




void FUN_00101d9f(void)

{
  return;
}




void FUN_0010144a(undefined8 *param_1,undefined8 param_2)

{
  void *__s;
  
  *param_1 = param_2;
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  *param_1 = __s;
  return;
}




void FUN_001019df(undefined4 param_1)

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




void FUN_00101a8c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101697(void)

{
  FUN_00101617();
  return;
}




void FUN_00101883(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001020a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102029(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101dec(void)

{
  return;
}




void FUN_00101a39(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d68(void)

{
  return;
}




void FUN_00101de1(void)

{
  return;
}




void FUN_00101e0d(void)

{
  return;
}




undefined8 FUN_00101d30(void)

{
  return 1;
}




void FUN_00101e18(void)

{
  return;
}




void FUN_00101597(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001015c5 to 001015c9 has its CatchHandler @ 001015ee */
  FUN_0010170c(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_0010176c(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




undefined8 FUN_001016a7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010185d("Calling good()...");
  FUN_00101697();
  FUN_0010185d("Finished good()");
  FUN_0010185d("Calling bad()...");
  FUN_00101597();
  FUN_0010185d("Finished bad()");
  return 0;
}




void FUN_00101909(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101d3f(void)

{
  return 0;
}




int FUN_00101d4e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d94(void)

{
  return;
}




void FUN_001018dd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101db5(void)

{
  return;
}




void FUN_00101dc0(void)

{
  return;
}




void FUN_00101e23(void)

{
  return;
}




void FUN_0010185d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101fb0(undefined8 *param_1)

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




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101390();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101617(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101645 to 00101649 has its CatchHandler @ 0010166e */
  FUN_0010144a(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_001014a6(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101dcb(void)

{
  return;
}




undefined8 FUN_00101e65(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e2e,local_18);
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




undefined8 FUN_00101f8d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




void FUN_00101dd6(void)

{
  return;
}




void FUN_0010195e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



