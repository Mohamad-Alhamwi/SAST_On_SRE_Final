
bool FUN_00101df5(pthread_t *param_1)

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




void FUN_0010160b(undefined8 param_1)

{
  FUN_001015cd(param_1);
  return;
}




void FUN_0010167a(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(800);
  FUN_0010162a(pvVar1);
  return;
}




void FUN_0010197d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c62(void)

{
  return;
}




void FUN_00101c78(void)

{
  return;
}




void FUN_001017cc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c8e(void)

{
  return;
}




void FUN_00101fd0(void)

{
  return;
}




void FUN_001018a2(undefined4 param_1)

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




void FUN_00101c41(void)

{
  return;
}




void FUN_00101746(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ca4(void)

{
  return;
}




undefined8 FUN_00101e50(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101877(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001016ab(void)

{
  FUN_0010167a();
  return;
}




void FUN_00101720(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019b0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101c02(void)

{
  return 0;
}




void FUN_001018fc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101821(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f0b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010194f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101cd0(void)

{
  return;
}




void FUN_00101c2b(void)

{
  return;
}




void FUN_00101caf(void)

{
  return;
}




void FUN_00101c99(void)

{
  return;
}




undefined8 FUN_001016bb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101720("Calling good()...");
  FUN_001016ab();
  FUN_00101720("Finished good()");
  FUN_00101720("Calling bad()...");
  FUN_00101649();
  FUN_00101720("Finished bad()");
  return 0;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101c83(void)

{
  return;
}




void FUN_00101778(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001015cd(undefined8 param_1)

{
  FUN_001013e9(param_1);
  return;
}




void FUN_001013e9(undefined4 *param_1)

{
  long in_FS_OFFSET;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(param_1 + local_340 * 2) = (&uStack_338)[local_340];
  }
  FUN_00101778(*param_1);
  if (param_1 != (undefined4 *)0x0) {
    operator_delete__(param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c4c(void)

{
  return;
}




void FUN_00101cc5(void)

{
  return;
}




void FUN_00101c6d(void)

{
  return;
}




void FUN_00101cf1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017f6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101eec(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




int FUN_00101c11(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101bf3(void)

{
  return 1;
}




void FUN_00101c57(void)

{
  return;
}




void FUN_00101649(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(400);
  FUN_0010160b(pvVar1);
  return;
}




void FUN_001014db(undefined4 *param_1)

{
  long in_FS_OFFSET;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(param_1 + local_340 * 2) = (&uStack_338)[local_340];
  }
  FUN_00101778(*param_1);
  if (param_1 != (undefined4 *)0x0) {
    operator_delete__(param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_001015ec(undefined8 param_1)

{
  FUN_001014db(param_1);
  return;
}




void FUN_00101cdb(void)

{
  return;
}




undefined8 FUN_00101d28(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cf1,local_18);
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




void FUN_00101924(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00101b14(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f2a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101a10(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101e73(undefined8 *param_1)

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




void FUN_00101c36(void)

{
  return;
}




void FUN_00101cba(void)

{
  return;
}




void FUN_0010184c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017a0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ce6(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_0010162a(undefined8 param_1)

{
  FUN_001015ec(param_1);
  return;
}



