
void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_001016ee(undefined8 param_1,undefined4 *param_2)

{
  long in_FS_OFFSET;
  ulong local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    local_338[local_340 * 2] = 0;
    local_338[local_340 * 2 + 1] = 0;
  }
  memcpy(param_2,local_338,800);
  FUN_00101813(*param_2);
  if (param_2 != (undefined4 *)0x0) {
    operator_delete__(param_2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017e1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101813(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019bf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f87(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101cdc(void)

{
  return;
}




void FUN_0010193d(undefined4 param_1)

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




void FUN_0010158b(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(800);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001016c0(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_00101d6b(void)

{
  return;
}




void FUN_00101d4a(void)

{
  return;
}




undefined8 FUN_00101f0e(undefined8 *param_1)

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




undefined8 FUN_0010160f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017bb("Calling good()...");
  FUN_001015ff();
  FUN_001017bb("Finished good()");
  FUN_001017bb("Calling bad()...");
  FUN_00101517();
  FUN_001017bb("Finished bad()");
  return 0;
}




void FUN_00101997(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d08(void)

{
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




void FUN_00101867(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d1e(void)

{
  return;
}




bool FUN_00101e90(pthread_t *param_1)

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




void FUN_00101d81(void)

{
  return;
}




void FUN_00101cd1(void)

{
  return;
}




void FUN_00101d55(void)

{
  return;
}




void FUN_00101674(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cc8;
  return;
}




void FUN_00101a4b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101dc3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d8c,local_18);
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




void FUN_0010183b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a18(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fc5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101fa6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101692(undefined8 *param_1)

{
  FUN_00101674(param_1);
  *param_1 = &PTR_FUN_00105c88;
  return;
}




void FUN_001017bb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00102060(void)

{
  return;
}




void FUN_00101d60(void)

{
  return;
}




void FUN_00101ff0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d3f(void)

{
  return;
}




void FUN_00101cc6(void)

{
  return;
}




void FUN_001016c0(undefined8 *param_1)

{
  FUN_00101674(param_1);
  *param_1 = &PTR_FUN_00105c70;
  return;
}




void FUN_00101912(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_00101cac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ce7(void)

{
  return;
}




void FUN_00101d8c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101891(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cf2(void)

{
  return;
}




void FUN_00101517(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(400);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_00101692(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_001018bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018e7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001019ea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101aab(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103270,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010144a(undefined8 param_1,undefined4 *param_2)

{
  long in_FS_OFFSET;
  ulong local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    local_338[local_340 * 2] = 0;
    local_338[local_340 * 2 + 1] = 0;
  }
  memcpy(param_2,local_338,800);
  FUN_00101813(*param_2);
  if (param_2 != (undefined4 *)0x0) {
    operator_delete__(param_2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cfd(void)

{
  return;
}




ulong FUN_00101baf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103278,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101eeb(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101d34(void)

{
  return;
}




void FUN_00101d13(void)

{
  return;
}




undefined8 FUN_00101c8e(void)

{
  return 1;
}




void FUN_00101d29(void)

{
  return;
}




void FUN_00101d76(void)

{
  return;
}




undefined8 FUN_00101c9d(void)

{
  return 0;
}




void FUN_001015ff(void)

{
  FUN_0010158b();
  return;
}



