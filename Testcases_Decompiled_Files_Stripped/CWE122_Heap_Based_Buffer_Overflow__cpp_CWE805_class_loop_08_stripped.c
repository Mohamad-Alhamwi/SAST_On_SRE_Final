
void FUN_001018fa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001019aa(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d1b(void)

{
  return;
}




void FUN_00101d9f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101ea3(pthread_t *param_1)

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




undefined8 FUN_00101ca1(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




undefined8 FUN_00101f21(undefined8 *param_1)

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




void FUN_00101cef(void)

{
  return;
}




void FUN_00101d7e(void)

{
  return;
}




void FUN_0010163f(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 *local_350;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_350 = (undefined4 *)0x0;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_350 = (undefined4 *)operator_new__(800);
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(local_350 + local_340 * 2) = (&uStack_338)[local_340];
  }
  FUN_00101826(*local_350);
  if (local_350 != (undefined4 *)0x0) {
    operator_delete__(local_350);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a5e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101769(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017ce("Calling good()...");
  FUN_00101754();
  FUN_001017ce("Finished good()");
  FUN_001017ce("Calling bad()...");
  FUN_00101407();
  FUN_001017ce("Finished bad()");
  return 0;
}




void FUN_00101ce4(void)

{
  return;
}




void FUN_00101fb9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001019d2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001013f8(void)

{
  return 0;
}




void FUN_00101a2b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d26(void)

{
  return;
}




void FUN_00101d52(void)

{
  return;
}




void FUN_00101cfa(void)

{
  return;
}




int FUN_00101cbf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d10(void)

{
  return;
}




void FUN_001017ce(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101d68(void)

{
  return;
}




void FUN_00101fd8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f9a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001019fd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101826(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101efe(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101abe(long param_1,ulong param_2,long param_3)

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




void FUN_0010184e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101925(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d89(void)

{
  return;
}




void FUN_00102080(void)

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




void FUN_00101407(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 *local_350;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_350 = (undefined4 *)0x0;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_350 = (undefined4 *)operator_new__(400);
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(local_350 + local_340 * 2) = (&uStack_338)[local_340];
  }
  FUN_00101826(*local_350);
  if (local_350 != (undefined4 *)0x0) {
    operator_delete__(local_350);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101dd6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d9f,local_18);
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




undefined8 FUN_00101cb0(void)

{
  return 0;
}




void FUN_00101d5d(void)

{
  return;
}




void FUN_00101d47(void)

{
  return;
}




void FUN_00101d94(void)

{
  return;
}




void FUN_00101950(undefined4 param_1)

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




void FUN_001017f4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010151c(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 *local_350;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_350 = (undefined4 *)0x0;
  iVar1 = FUN_001013f8();
  if (iVar1 == 0) {
    local_350 = (undefined4 *)operator_new__(800);
  }
  else {
    FUN_001017ce("Benign, fixed string");
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(local_350 + local_340 * 2) = (&uStack_338)[local_340];
  }
  FUN_00101826(*local_350);
  if (local_350 != (undefined4 *)0x0) {
    operator_delete__(local_350);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018cf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101d05(void)

{
  return;
}




void FUN_00101d3c(void)

{
  return;
}




void FUN_00101d31(void)

{
  return;
}




void FUN_00101d73(void)

{
  return;
}




void FUN_00102010(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101cd9(void)

{
  return;
}




ulong FUN_00101bc2(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001013e9(void)

{
  return 1;
}




void FUN_00101754(void)

{
  FUN_0010151c();
  FUN_0010163f();
  return;
}




void FUN_0010187a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



