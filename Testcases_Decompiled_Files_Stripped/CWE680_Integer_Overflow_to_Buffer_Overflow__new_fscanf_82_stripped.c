
/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00102000(void)

{
  return;
}




void FUN_0010144a(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  ulong local_20;
  
  puVar1 = (undefined4 *)operator_new__((long)param_2 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)param_2; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001017ac(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




void FUN_001014d0(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_0010313e,&local_2c);
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00101672(puVar1);
  local_28 = puVar1;
  (**(code **)*puVar1)(puVar1,local_2c);
  if (local_28 != (undefined8 *)0x0) {
    operator_delete(local_28,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010177a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101cee(void)

{
  return;
}




void FUN_00101983(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001016ce(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  ulong local_20;
  
  puVar1 = (undefined4 *)operator_new__((long)param_2 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)param_2; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001017ac(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




undefined8 FUN_00101e84(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c96(void)

{
  return;
}




void FUN_00101c75(void)

{
  return;
}




void FUN_00101ce3(void)

{
  return;
}




void FUN_00101f5e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101b48(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103270,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101754(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d25(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001015df(void)

{
  FUN_00101575();
  return;
}




undefined8 FUN_00101c36(void)

{
  return 0;
}




void FUN_00101ccd(void)

{
  return;
}




void FUN_00101cac(void)

{
  return;
}




void FUN_00101958(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_00101800(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cc2(void)

{
  return;
}




undefined8 FUN_00101ea7(undefined8 *param_1)

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




undefined8 FUN_00101d5c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d25,local_18);
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




void FUN_00101575(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  FUN_001016a0(puVar1);
  (**(code **)*puVar1)(puVar1,0x14);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_001017d4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d04(void)

{
  return;
}




void FUN_00101cf9(void)

{
  return;
}




void FUN_00101f20(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106028 = 1;
    return;
  }
  return;
}




void FUN_00101d1a(void)

{
  return;
}




void FUN_00101c8b(void)

{
  return;
}




void FUN_00101d0f(void)

{
  return;
}




void FUN_00101c6a(void)

{
  return;
}




void FUN_00101930(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001016a0(undefined8 *param_1)

{
  FUN_00101654(param_1);
  *param_1 = &PTR_FUN_00105c70;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001018d6(undefined4 param_1)

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




void FUN_001019b1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101cb7(void)

{
  return;
}




undefined8 FUN_001015ef(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101754("Calling good()...");
  FUN_001015df();
  FUN_00101754("Finished good()");
  FUN_00101754("Calling bad()...");
  FUN_001014d0();
  FUN_00101754("Finished bad()");
  return 0;
}




void FUN_001019e4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001017ac(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101654(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cc8;
  return;
}




void FUN_00101672(undefined8 *param_1)

{
  FUN_00101654(param_1);
  *param_1 = &PTR_FUN_00105c88;
  return;
}




void FUN_0010182a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101a44(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103268,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cd8(void)

{
  return;
}




void FUN_00101855(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101e29(pthread_t *param_1)

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




void FUN_00101c5f(void)

{
  return;
}




undefined8 FUN_00101c27(void)

{
  return 1;
}




void FUN_00101f3f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101880(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




int FUN_00101c45(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ca1(void)

{
  return;
}




void FUN_001018ab(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



