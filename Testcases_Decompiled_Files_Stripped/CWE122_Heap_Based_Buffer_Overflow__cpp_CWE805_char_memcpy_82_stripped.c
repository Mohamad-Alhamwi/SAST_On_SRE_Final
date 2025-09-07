
void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101898(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018ec(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101916(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ad0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102080(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d82(void)

{
  return;
}




void FUN_00101a6f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001016be(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cc8;
  return;
}




void FUN_00101e11(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101df0(void)

{
  return;
}




void FUN_0010204a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010170a(undefined8 *param_1)

{
  FUN_001016be(param_1);
  *param_1 = &PTR_FUN_00105c70;
  return;
}




void FUN_00101a9d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101dae(void)

{
  return;
}




void FUN_001015cd(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  puVar2 = (undefined8 *)operator_new(8);
  FUN_0010170a(puVar2);
  (**(code **)*puVar2)(puVar2,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_0010196c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101dc4(void)

{
  return;
}




void FUN_0010200c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




bool FUN_00101f15(pthread_t *param_1)

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




void FUN_00101d77(void)

{
  return;
}




void FUN_00101dfb(void)

{
  return;
}




void FUN_00101738(undefined8 param_1,undefined8 *param_2)

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
  FUN_00101840(param_2);
  if (param_2 != (undefined8 *)0x0) {
    operator_delete__(param_2);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d13(void)

{
  return 1;
}




undefined8 FUN_00101f93(undefined8 *param_1)

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




void FUN_00101941(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106018 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106018 = 1;
    return;
  }
  return;
}




ulong FUN_00101c34(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103274,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001020f0(void)

{
  return;
}




void FUN_00101840(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001018c0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101552(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001016dc(puVar2);
  (**(code **)*puVar2)(puVar2,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_00101e06(void)

{
  return;
}




void FUN_00101de5(void)

{
  return;
}




void FUN_00101d6c(void)

{
  return;
}




void FUN_00101866(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a44(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d61(void)

{
  return;
}




void FUN_00101d8d(void)

{
  return;
}




undefined8 FUN_00101f70(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101997(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d98(void)

{
  return;
}




undefined8 FUN_00101658(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101840("Calling good()...");
  FUN_00101648();
  FUN_00101840("Finished good()");
  FUN_00101840("Calling bad()...");
  FUN_00101552();
  FUN_00101840("Finished bad()");
  return 0;
}




void FUN_001019c2(undefined4 param_1)

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




void FUN_00101a1c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101b30(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010326c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101d22(void)

{
  return 0;
}




void FUN_00101648(void)

{
  FUN_001015cd();
  return;
}




void FUN_00101da3(void)

{
  return;
}




int FUN_00101d31(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010202b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010144a(undefined8 param_1,undefined8 *param_2)

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
  FUN_00101840(param_2);
  if (param_2 != (undefined8 *)0x0) {
    operator_delete__(param_2);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dda(void)

{
  return;
}




void FUN_00101db9(void)

{
  return;
}




void FUN_00101d4b(void)

{
  return;
}




void FUN_00101dcf(void)

{
  return;
}




undefined8 FUN_00101e48(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e11,local_18);
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




void FUN_00101d56(void)

{
  return;
}




void FUN_001016dc(undefined8 *param_1)

{
  FUN_001016be(param_1);
  *param_1 = &PTR_FUN_00105c88;
  return;
}



