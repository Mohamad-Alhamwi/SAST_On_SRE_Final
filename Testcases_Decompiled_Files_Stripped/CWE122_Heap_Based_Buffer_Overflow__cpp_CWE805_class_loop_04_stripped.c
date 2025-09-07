
void FUN_001014f0(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined4 *)operator_new__(800);
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_001017d0(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cc5(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001016fe(void)

{
  FUN_001014f0();
  FUN_001015f7();
  return;
}




void FUN_00101ce6(void)

{
  return;
}




void FUN_00101f82(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d33(void)

{
  return;
}




void FUN_001018fa(undefined4 param_1)

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




undefined8 FUN_00101ea8(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101b6c(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d12(void)

{
  return;
}




undefined8 FUN_00101c5a(void)

{
  return 0;
}




bool FUN_00101e4d(pthread_t *param_1)

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




void FUN_001017d0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001017f8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101778(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101cf1(void)

{
  return;
}




void FUN_001019d5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d07(void)

{
  return;
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




void FUN_001015f7(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined4 *)operator_new__(800);
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_001017d0(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d49(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101ecb(undefined8 *param_1)

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




void FUN_00101f63(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_00101c69(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101954(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010184e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101cfc(void)

{
  return;
}




void FUN_00101c8e(void)

{
  return;
}




void FUN_0010179e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101caf(void)

{
  return;
}




void FUN_00101d1d(void)

{
  return;
}




undefined8 FUN_00101713(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101778("Calling good()...");
  FUN_001016fe();
  FUN_00101778("Finished good()");
  FUN_00101778("Calling bad()...");
  FUN_001013e9();
  FUN_00101778("Finished bad()");
  return 0;
}




void FUN_00101c99(void)

{
  return;
}




void FUN_00101cd0(void)

{
  return;
}




void FUN_0010197c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a08(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d3e(void)

{
  return;
}




void FUN_001018cf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cdb(void)

{
  return;
}




void FUN_001013e9(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined4 *)operator_new__(400);
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(puVar1 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_001017d0(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00101a68(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c83(void)

{
  return;
}




void FUN_00101cba(void)

{
  return;
}




void FUN_001018a4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f44(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00102020(void)

{
  return;
}




undefined8 FUN_00101d80(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d49,local_18);
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




void FUN_00101d28(void)

{
  return;
}




void FUN_001019a7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101c4b(void)

{
  return 1;
}




void FUN_00101ca4(void)

{
  return;
}




void FUN_00101879(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101824(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



